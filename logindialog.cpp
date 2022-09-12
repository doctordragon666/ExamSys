#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    //设置图片填充
    ui->imgLabel->setScaledContents(true);

    //重置长宽高
    resize(ui->imgLabel->width(), ui->imgLabel->height());

    setWindowTitle("驾考登录");

    setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);//设置只有关闭按钮

    setFixedSize(width(),height());//固定长宽
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    QRegExp rx("^[A-Za-z0-9]+([_\.][[A-Za-z0-9]+)*@([[A-Za-z0-9\-]+\.)+[[A-Za-z]{2,6}$");
    bool res = rx.exactMatch(ui->accountEdit->text());
    if(!res)
    {
        QMessageBox::information(this, "提示","非法邮箱地址地址");
        ui->accountEdit->clear();
        ui->codeEdit->clear();
        ui->accountEdit->setFocus();
        return;
    }
    else
    {
        QString filename;
        QString strAccInput;
        QString strCode;
        QString strLine;
        QStringList strList;

        filename = "../account.txt";
        strAccInput = ui->accountEdit->text();
        strCode = ui->codeEdit->text();

        QFile file(filename);
        QTextStream stream(&file);

        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            while (!stream.atEnd()) {
                strLine = stream.readLine();
                strList = strLine.split(",");
                if(strAccInput == strList.at(0))
                {
                    //密码匹配成功
                    if(strCode == strList.at(1)){
                        QMessageBox::information(this,"提示","欢迎进入系统！");
                        file.close();
                        done(Accepted);
                        return;
                    }
                    else{
                        QMessageBox::information(this, "提示","密码有误");
                        ui->accountEdit->clear();
                        ui->codeEdit->clear();
                        ui->accountEdit->setFocus();
                        file.close();
                        return;
                    }
                }

            }
        }
        else {
            QMessageBox::information(this, "提示","账号不存在");
            return;
        }

        QMessageBox::information(this, "提示","成功登录");
    }
}

void LoginDialog::on_cancelBtn_clicked()
{
    done(Rejected);
}
