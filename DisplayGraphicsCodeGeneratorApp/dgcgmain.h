#ifndef DGCGMAIN_H
#define DGCGMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DGCGMain; }
QT_END_NAMESPACE

class DGCGMain : public QMainWindow
{
    Q_OBJECT

public:
    DGCGMain(QWidget *parent = nullptr);
    ~DGCGMain();

private slots:
    void on_pbLoadImage_clicked();

private:
    Ui::DGCGMain *ui;
    QString imageFilename;
    QImage image;
};
#endif // DGCGMAIN_H
