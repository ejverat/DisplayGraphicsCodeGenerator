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
    QString filename = QFileDialog::getOpenFileName(this, tr("Load image"), qgetenv("$HOME"), tr("Images (*.png *.xpm *.jpg)"));
	this->imageFilename = filename;
	qDebug() << imageFilename;
}

