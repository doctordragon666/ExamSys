/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *imgLabel;
    QPushButton *loginBtn;
    QPushButton *cancelBtn;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *accountEdit;
    QLineEdit *codeEdit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(662, 404);
        LoginDialog->setStyleSheet(QString::fromUtf8(""));
        imgLabel = new QLabel(LoginDialog);
        imgLabel->setObjectName(QString::fromUtf8("imgLabel"));
        imgLabel->setGeometry(QRect(0, 0, 661, 401));
        imgLabel->setStyleSheet(QString::fromUtf8("background-image:url(:/login.png);"));
        imgLabel->setPixmap(QPixmap(QString::fromUtf8("login.png")));
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(170, 310, 93, 28));
        cancelBtn = new QPushButton(LoginDialog);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(420, 310, 93, 28));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 220, 72, 16));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 260, 72, 21));
        accountEdit = new QLineEdit(LoginDialog);
        accountEdit->setObjectName(QString::fromUtf8("accountEdit"));
        accountEdit->setGeometry(QRect(250, 220, 201, 21));
        codeEdit = new QLineEdit(LoginDialog);
        codeEdit->setObjectName(QString::fromUtf8("codeEdit"));
        codeEdit->setGeometry(QRect(250, 260, 201, 21));
        codeEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        imgLabel->setText(QString());
        loginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        cancelBtn->setText(QApplication::translate("LoginDialog", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
