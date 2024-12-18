#include "logindialog.h"
#include <examdialog.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog loginDialog;
    int res = loginDialog.exec();//等待这个窗口结束

    if(res == QDialog::Accepted)
    {
        ExamDialog* examDialog;
        examDialog = new ExamDialog;
        examDialog->show();
    }
    else {
        return 0;
    }

    return a.exec();
}
