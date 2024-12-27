#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

LoginDialog::LoginDialog(QWidget* parent) :
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

    setFixedSize(width(), height());//固定长宽
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    /**** 验证邮箱是否正确 ****/
    QRegExp rx("^[A-Za-z0-9]+([_\.][[A-Za-z0-9]+)*@([[A-Za-z0-9\-]+\.)+[[A-Za-z]{2,6}$");
    if (!rx.exactMatch(ui->accountEdit->text()))
    {
        QMessageBox::information(this, "提示", "非法邮箱地址地址");
        ui->accountEdit->clear();
        ui->codeEdit->clear();
        ui->accountEdit->setFocus();
        return;
    }
    QString filename = "../account.txt";
    QString strAccInput = ui->accountEdit->text();
    QString strCode = ui->codeEdit->text();
    QStringList strList;

    QFile file(filename);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        while (!stream.atEnd()) {
            strList = stream.readLine().split(",");
            if (strAccInput == strList.at(0))
            {
                //密码匹配成功
                if (strCode == strList.at(1)) {
                    QMessageBox::information(this, "提示", "欢迎进入系统！");
                    file.close();
                    done(Accepted);
                    return;
                }
                else {
                    QMessageBox::information(this, "提示", "密码有误");
                    ui->accountEdit->clear();
                    ui->codeEdit->clear();
                    ui->accountEdit->setFocus();
                    file.close();
                    return;
                }
            }

        }
        QMessageBox::information(this, "提示", "账号不存在");
        goto fail;
        file.close();
        return;
    }
    QMessageBox::information(this, "提示", "账号文件不存在");
    fail:
    file.close();
    return;
}

void LoginDialog::on_cancelBtn_clicked()
{
    done(Rejected);
}
