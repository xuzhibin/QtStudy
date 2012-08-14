#include <QApplication>
#include <QTextCodec>
#include "mainwindow.h"
#include "logindlg.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale()); //…Ë÷√±‡¬Î
    MainWindow w;
    LoginDlg dlg;
    if(dlg.exec()== QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }
    return 0;
}
