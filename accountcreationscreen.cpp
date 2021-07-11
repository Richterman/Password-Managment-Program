#include "accountcreationscreen.h"
#include "ui_accountcreationscreen.h"
#include "classes.cpp"
#include <string>
#include <QList>


QList<QString> inputAccountName;
QList<QString> inputUsername;
QList<QString> inputPassword;
QList<QString> inputAnswer2;
QList<QString> inputAnswer1;
QList<QString> inputWebsite;
QList<QString> inputEmail;
QList<QString> inputQuestion1;
QList<QString> inputQuestion2;

std::string billyTest;


accountCreationScreen::accountCreationScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountCreationScreen)
{
    ui->setupUi(this);
}

accountCreationScreen::~accountCreationScreen()
{
    delete ui;
}

void accountCreationScreen::on_checkbox_Secret_stateChanged(int arg1)
{


    if(ui->checkbox_Secret->isChecked() == 1)

    {
        ui->editAnser1->setEnabled(1);
        ui->editAnswer2->setEnabled(1);
        ui->lineEdit->setEnabled(1);
        ui->lineEdit_2->setEnabled(1);
    } else {
        ui->editAnser1->setEnabled(0);
        ui->editAnswer2->setEnabled(0);
        ui->lineEdit->setEnabled(0);
        ui->lineEdit_2->setEnabled(0);

    }

}

void accountCreationScreen::on_btnCancel_clicked()
{
      accountCreationScreen::~accountCreationScreen();
}


void accountCreationScreen::on_btnSave_clicked()
{

    inputAccountName << ui->editAccountName->text();
    inputWebsite << ui->editWebsite->text();
    inputEmail << ui->editEmail->text();
    inputUsername << ui->editUsername->text();
    inputPassword << ui->editPassword->text();
    inputAnswer1 << ui->editAnser1->text();
    inputAnswer2 << ui->editAnswer2->text();
    inputQuestion1 << ui->lineEdit->text();
    inputQuestion2 << ui->lineEdit_2->text();


    accountCreationScreen::~accountCreationScreen();
}

