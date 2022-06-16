#include "dgcgmain.h"
#include "./ui_dgcgmain.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QFile>
#include <QDebug>
#include "QImage8BGrayToImageMonoBinary.h"
#include "ImageMonoBinaryCSerializer.h"
#include <memory>

DGCGMain::DGCGMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DGCGMain)
{
    ui->setupUi(this);
}

DGCGMain::~DGCGMain()
{
    delete ui;
}


void DGCGMain::on_pbLoadImage_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Load image"), QDir::homePath(), tr("Images (*.png *.xpm *.jpg *.bmp *.pgm)"));
    this->imageFilename = filename;
    QFileInfo fileInfo(imageFilename);
    this->ui->labelImageFilename->setText(imageFilename);
    qDebug() << fileInfo.fileName();
    /*auto image = std::make_shared<QImage>();
    image->load(filename);
    DGCG::QImage8BGrayToImageMonoBinary imageConverter(image);
    std::shared_ptr<DGCG::Image> newImage = imageConverter.Convert();
    DGCG::ImageMonoBinaryCSerializer serializer{std::dynamic_pointer_cast<DGCG::ImageMonoBinary>(newImage),"",filename.toStdString()};
    auto imgStr = serializer.Serialize();
    */
    //qDebug() << image.Load(imageFilename.toStdString());
    //qDebug() << image.GetImage().size();
    //qDebug() << image.GetImage().format();
}

void DGCGMain::on_pbLoadCode_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Load code template"), QDir::homePath(), tr("C-code (*.c *.h *.cpp *.hpp)"));
    this->codeTemplateFilename = filename;
    this->ui->labelCodeFilename->setText(codeTemplateFilename);
    qDebug() << codeTemplateFilename;

}


void DGCGMain::on_pbGenerate_clicked()
{
    QFileInfo imageFile(imageFilename);
    QFileInfo templateCodeFile(codeTemplateFilename);


    auto image = std::make_shared<QImage>();
    image->load(imageFilename);

    QFile codeTemplae(codeTemplateFilename);
    codeTemplae.open(QIODevice::ReadOnly);
    QTextStream in(&codeTemplae);

    QString inputFormat = in.readAll();
    codeTemplae.close();

    DGCG::QImage8BGrayToImageMonoBinary imageConverter(image);
    std::shared_ptr<DGCG::Image> newImage = imageConverter.Convert();

    DGCG::ImageMonoBinaryCSerializer serializer{std::dynamic_pointer_cast<DGCG::ImageMonoBinary>(newImage),inputFormat.toStdString(),imageFile.baseName().toStdString()};
    auto imgStr = serializer.Serialize();

    QString outputFile = codeOutput + imageFile.baseName() + "." + templateCodeFile.completeSuffix();
    QFile outCode(outputFile);
    outCode.open(QIODevice::WriteOnly);
    QTextStream out(&outCode);
    out << QString(imgStr.c_str());
    outCode.close();

}


void DGCGMain::on_pbOutputDir_clicked()
{

    codeOutput = QFileDialog::getExistingDirectory(this,tr("Select output directory"),QDir::homePath());
    codeOutput += "/";
    this->ui->labelOutputDir->setText(codeOutput);
    qDebug() << codeOutput;
}

