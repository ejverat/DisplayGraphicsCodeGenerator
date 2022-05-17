#include "dgcgmain.h"
#include "./ui_dgcgmain.h"

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

