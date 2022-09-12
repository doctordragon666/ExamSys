/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(798, 513);
        LoginDialog->setStyleSheet(QStringLiteral(""));
        imgLabel = new QLabel(LoginDialog);
        imgLabel->setObjectName(QStringLiteral("imgLabel"));
        imgLabel->setGeometry(QRect(90, 50, 621, 391));
        imgLabel->setPixmap(QPixmap(QString::fromUtf8("login.png")));
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(250, 340, 93, 28));
        cancelBtn = new QPushButton(LoginDialog);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(500, 340, 93, 28));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 220, 72, 16));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 260, 72, 21));
        accountEdit = new QLineEdit(LoginDialog);
        accountEdit->setObjectName(QStringLiteral("accountEdit"));
        accountEdit->setGeometry(QRect(320, 220, 201, 21));
        codeEdit = new QLineEdit(LoginDialog);
        codeEdit->setObjectName(QStringLiteral("codeEdit"));
        codeEdit->setGeometry(QRect(320, 260, 201, 21));
        codeEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        imgLabel->setText(QString());
        loginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("LoginDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
