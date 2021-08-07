/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_Qt;
    QAction *actionGith_ub;
    QAction *actionLicense;
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QComboBox *comboBox;
    QPushButton *btnAddNew;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *editPassword;
    QLineEdit *editEmail;
    QLabel *label_5;
    QLineEdit *editAnswer2;
    QLabel *label_4;
    QLineEdit *editWebsite;
    QLabel *label_6;
    QLineEdit *editPhone;
    QLabel *label_2;
    QLineEdit *editQuestion2;
    QLineEdit *editQuestion1;
    QLabel *label_12;
    QLabel *label_8;
    QLineEdit *editQuestion3;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *editAccountName;
    QLabel *label_9;
    QLineEdit *editAnswer1;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLineEdit *editAnswer3;
    QLineEdit *editUsername;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnHide;
    QPushButton *btnApply;
    QPushButton *pushButton;
    QGridLayout *gridLayout_3;
    QLineEdit *account16;
    QLineEdit *account7;
    QLineEdit *account9;
    QLabel *labelAccount;
    QLineEdit *account10;
    QLineEdit *account4;
    QLineEdit *account1;
    QLineEdit *account15;
    QLineEdit *account8;
    QLineEdit *account13;
    QLineEdit *account12;
    QPushButton *btnAccountAddApply;
    QLineEdit *account14;
    QLineEdit *account2;
    QLineEdit *account18;
    QLineEdit *account5;
    QLineEdit *account3;
    QLineEdit *account17;
    QLineEdit *account11;
    QLineEdit *account6;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(796, 638);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionGith_ub = new QAction(MainWindow);
        actionGith_ub->setObjectName(QString::fromUtf8("actionGith_ub"));
        actionLicense = new QAction(MainWindow);
        actionLicense->setObjectName(QString::fromUtf8("actionLicense"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 1);

        btnAddNew = new QPushButton(centralwidget);
        btnAddNew->setObjectName(QString::fromUtf8("btnAddNew"));

        gridLayout_2->addWidget(btnAddNew, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editPassword = new QLineEdit(centralwidget);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));

        gridLayout->addWidget(editPassword, 1, 4, 1, 1);

        editEmail = new QLineEdit(centralwidget);
        editEmail->setObjectName(QString::fromUtf8("editEmail"));

        gridLayout->addWidget(editEmail, 2, 1, 1, 2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        editAnswer2 = new QLineEdit(centralwidget);
        editAnswer2->setObjectName(QString::fromUtf8("editAnswer2"));

        gridLayout->addWidget(editAnswer2, 7, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        editWebsite = new QLineEdit(centralwidget);
        editWebsite->setObjectName(QString::fromUtf8("editWebsite"));

        gridLayout->addWidget(editWebsite, 3, 1, 1, 4);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        editPhone = new QLineEdit(centralwidget);
        editPhone->setObjectName(QString::fromUtf8("editPhone"));

        gridLayout->addWidget(editPhone, 2, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        editQuestion2 = new QLineEdit(centralwidget);
        editQuestion2->setObjectName(QString::fromUtf8("editQuestion2"));

        gridLayout->addWidget(editQuestion2, 6, 2, 1, 3);

        editQuestion1 = new QLineEdit(centralwidget);
        editQuestion1->setObjectName(QString::fromUtf8("editQuestion1"));

        gridLayout->addWidget(editQuestion1, 4, 1, 1, 4);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        editQuestion3 = new QLineEdit(centralwidget);
        editQuestion3->setObjectName(QString::fromUtf8("editQuestion3"));

        gridLayout->addWidget(editQuestion3, 8, 2, 1, 3);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        editAccountName = new QLineEdit(centralwidget);
        editAccountName->setObjectName(QString::fromUtf8("editAccountName"));

        gridLayout->addWidget(editAccountName, 0, 1, 1, 2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        editAnswer1 = new QLineEdit(centralwidget);
        editAnswer1->setObjectName(QString::fromUtf8("editAnswer1"));

        gridLayout->addWidget(editAnswer1, 5, 2, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 8, 0, 1, 2);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        editAnswer3 = new QLineEdit(centralwidget);
        editAnswer3->setObjectName(QString::fromUtf8("editAnswer3"));

        gridLayout->addWidget(editAnswer3, 9, 2, 1, 1);

        editUsername = new QLineEdit(centralwidget);
        editUsername->setObjectName(QString::fromUtf8("editUsername"));

        gridLayout->addWidget(editUsername, 1, 1, 1, 2);


        gridLayout_4->addLayout(gridLayout, 2, 0, 1, 2);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnHide = new QPushButton(centralwidget);
        btnHide->setObjectName(QString::fromUtf8("btnHide"));

        horizontalLayout->addWidget(btnHide);

        btnApply = new QPushButton(centralwidget);
        btnApply->setObjectName(QString::fromUtf8("btnApply"));

        horizontalLayout->addWidget(btnApply);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout_4->addLayout(horizontalLayout, 3, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        account16 = new QLineEdit(centralwidget);
        account16->setObjectName(QString::fromUtf8("account16"));

        gridLayout_3->addWidget(account16, 9, 1, 1, 1);

        account7 = new QLineEdit(centralwidget);
        account7->setObjectName(QString::fromUtf8("account7"));

        gridLayout_3->addWidget(account7, 8, 0, 1, 1);

        account9 = new QLineEdit(centralwidget);
        account9->setObjectName(QString::fromUtf8("account9"));

        gridLayout_3->addWidget(account9, 2, 1, 1, 1);

        labelAccount = new QLabel(centralwidget);
        labelAccount->setObjectName(QString::fromUtf8("labelAccount"));

        gridLayout_3->addWidget(labelAccount, 0, 0, 1, 2);

        account10 = new QLineEdit(centralwidget);
        account10->setObjectName(QString::fromUtf8("account10"));

        gridLayout_3->addWidget(account10, 3, 1, 1, 1);

        account4 = new QLineEdit(centralwidget);
        account4->setObjectName(QString::fromUtf8("account4"));

        gridLayout_3->addWidget(account4, 5, 0, 1, 1);

        account1 = new QLineEdit(centralwidget);
        account1->setObjectName(QString::fromUtf8("account1"));

        gridLayout_3->addWidget(account1, 2, 0, 1, 1);

        account15 = new QLineEdit(centralwidget);
        account15->setObjectName(QString::fromUtf8("account15"));

        gridLayout_3->addWidget(account15, 8, 1, 1, 1);

        account8 = new QLineEdit(centralwidget);
        account8->setObjectName(QString::fromUtf8("account8"));

        gridLayout_3->addWidget(account8, 9, 0, 1, 1);

        account13 = new QLineEdit(centralwidget);
        account13->setObjectName(QString::fromUtf8("account13"));

        gridLayout_3->addWidget(account13, 6, 1, 1, 1);

        account12 = new QLineEdit(centralwidget);
        account12->setObjectName(QString::fromUtf8("account12"));

        gridLayout_3->addWidget(account12, 5, 1, 1, 1);

        btnAccountAddApply = new QPushButton(centralwidget);
        btnAccountAddApply->setObjectName(QString::fromUtf8("btnAccountAddApply"));

        gridLayout_3->addWidget(btnAccountAddApply, 12, 1, 1, 1);

        account14 = new QLineEdit(centralwidget);
        account14->setObjectName(QString::fromUtf8("account14"));

        gridLayout_3->addWidget(account14, 7, 1, 1, 1);

        account2 = new QLineEdit(centralwidget);
        account2->setObjectName(QString::fromUtf8("account2"));

        gridLayout_3->addWidget(account2, 3, 0, 1, 1);

        account18 = new QLineEdit(centralwidget);
        account18->setObjectName(QString::fromUtf8("account18"));

        gridLayout_3->addWidget(account18, 10, 1, 1, 1);

        account5 = new QLineEdit(centralwidget);
        account5->setObjectName(QString::fromUtf8("account5"));

        gridLayout_3->addWidget(account5, 6, 0, 1, 1);

        account3 = new QLineEdit(centralwidget);
        account3->setObjectName(QString::fromUtf8("account3"));

        gridLayout_3->addWidget(account3, 4, 0, 1, 1);

        account17 = new QLineEdit(centralwidget);
        account17->setObjectName(QString::fromUtf8("account17"));

        gridLayout_3->addWidget(account17, 10, 0, 1, 1);

        account11 = new QLineEdit(centralwidget);
        account11->setObjectName(QString::fromUtf8("account11"));

        gridLayout_3->addWidget(account11, 4, 1, 1, 1);

        account6 = new QLineEdit(centralwidget);
        account6->setObjectName(QString::fromUtf8("account6"));

        gridLayout_3->addWidget(account6, 7, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 796, 30));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addAction(actionGith_ub);
        menuHelp->addAction(actionLicense);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionGith_ub->setText(QCoreApplication::translate("MainWindow", "Github", nullptr));
        actionLicense->setText(QCoreApplication::translate("MainWindow", "License", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Account List", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Select An Account", nullptr));

        btnAddNew->setText(QCoreApplication::translate("MainWindow", "Add a New Account", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Secret Question 1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Phone #", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Website/Location", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        editQuestion3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Secret Question 2", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Secret Question 3", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Account Name", nullptr));
        editAnswer3->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Version 1.0", nullptr));
        btnHide->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        btnApply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Not Implemented</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "null", nullptr));
        labelAccount->setText(QCoreApplication::translate("MainWindow", "Please create the accounts you would like to view", nullptr));
        btnAccountAddApply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
