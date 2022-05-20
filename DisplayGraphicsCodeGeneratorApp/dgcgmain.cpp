#include "dgcgmain.h"
#include "./ui_dgcgmain.h"
#include <QFileDialog>

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
    qDebug() << imageFilename;
    qDebug() << image.load(imageFilename);
    qDebug() << image.size();
    qDebug() << image.format();
}
