#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QObject>
#include <vector>
#include "classes.cpp"
#include <string>

QList<QString> inputAccountName;
QList<QString> inputUsername;
QList<QString> inputPassword;
QList<QString> inputAnswer2;
QList<QString> inputAnswer1;
QList<QString> inputWebsite;
QList<QString> inputEmail;
QList<QString> inputQuestion1;
QList<QString> inputQuestion2;

QList<QString> accountlist;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbout_Qt_triggered()
{
    QApplication::aboutQt();
}


void MainWindow::on_btnCreateAccount_clicked()
{
 //  accountCreationScreen *mainwindow = new accountCreationScreen(this);      // create infinite children
 //  mainwindow->show();                                                                                        // not needed, but will keep for future references
    ui->btnSave->setEnabled(1);
    ui->btnCancel->setEnabled(1);
    ui->editAccountName->setEnabled(1);
    ui->editUsername->setEnabled(1);
    ui->editPassword->setEnabled(1);
    ui->editEmail->setEnabled(1);
    ui->editQuestion1->setEnabled(1);
    ui->editQuestion2->setEnabled(1);
    ui->editAnswer2->setEnabled(1);
    ui->editAnswer1->setEnabled(1);
    ui->label->setEnabled(0);
    ui->comboBox->setEnabled(0);
    ui->label_2->setEnabled(1);
    ui->label_3->setEnabled(1);
    ui->label_5->setEnabled(1);
    ui->label_6->setEnabled(1);
    ui->label_7->setEnabled(1);
    ui->label_8->setEnabled(1);
    ui->label_10->setEnabled(1);

    ui->editAccountName->setText("null");
    ui->editUsername->setText("null");
    ui->editPassword->setText("null");
    ui->editEmail->setText("null");
    ui->editQuestion1->setText("null");
    ui->editQuestion2->setText("null");
    ui->editAnswer1->setText("null");
    ui->editAnswer2->setText("null");



 //   QWidget *wdg =;       how to create a blank window
 //   wdg->show();
   // hide();     // hide main window

   // accountCreationScreen mainwindow;
   // accountCreationScreen.show();
}

void MainWindow::on_btnCancel_clicked()
{
    ui->editAccountName->setEnabled(0);
    ui->editUsername->setEnabled(0);
    ui->editPassword->setEnabled(0);
    ui->editEmail->setEnabled(0);
    ui->editQuestion1->setEnabled(0);
    ui->editQuestion2->setEnabled(0);
    ui->editAnswer2->setEnabled(0);
    ui->editAnswer1->setEnabled(0);
    ui->btnCancel->setEnabled(0);
    ui->btnApply->setEnabled(0);
    ui->label->setEnabled(1);
    ui->label_2->setEnabled(0);
    ui->label_3->setEnabled(0);
    ui->label_5->setEnabled(0);
    ui->label_6->setEnabled(0);
    ui->label_7->setEnabled(0);
    ui->label_8->setEnabled(0);
    ui->label_10->setEnabled(0);
    ui->comboBox->setEnabled(1);

    ui->editAccountName->setText("null");
    ui->editUsername->setText("null");
    ui->editPassword->setText("null");
    ui->editEmail->setText("null");
    ui->editQuestion1->setText("null");
    ui->editQuestion2->setText("null");
    ui->editAnswer1->setText("null");
    ui->editAnswer2->setText("null");
}


void MainWindow::on_btnSave_clicked()
{
    inputAccountName.append(ui->editAccountName->text());
    inputAnswer1.append(ui->editAnswer1->text());
    inputAnswer2.append(ui->editAnswer2->text());
    inputEmail.append(ui->editEmail->text());
    inputPassword.append(ui->editPassword->text());
    inputQuestion1.append(ui->editQuestion1->text());
    inputQuestion2.append(ui->editQuestion2->text());
    inputUsername.append(ui->editUsername->text());

  //  ui->listBox->addItems(inputAccountName);



    // display default text
    ui->editAccountName->setEnabled(0);
    ui->editUsername->setEnabled(0);
    ui->editPassword->setEnabled(0);
    ui->editEmail->setEnabled(0);
    ui->editQuestion1->setEnabled(0);
    ui->editQuestion2->setEnabled(0);
    ui->editAnswer2->setEnabled(0);
    ui->editAnswer1->setEnabled(0);
    ui->btnCancel->setEnabled(0);
    ui->btnApply->setEnabled(0);
    ui->label->setEnabled(1);
    ui->label_2->setEnabled(0);
    ui->label_3->setEnabled(0);
    ui->label_5->setEnabled(0);
    ui->label_6->setEnabled(0);
    ui->label_7->setEnabled(0);
    ui->label_8->setEnabled(0);
    ui->label_10->setEnabled(0);
    ui->comboBox->setEnabled(1);

    ui->editAccountName->setText("null");
    ui->editUsername->setText("null");
    ui->editPassword->setText("null");
    ui->editEmail->setText("null");
    ui->editQuestion1->setText("null");
    ui->editQuestion2->setText("null");
    ui->editAnswer1->setText("null");
    ui->editAnswer2->setText("null");

    accountlist.append(ui->editAccountName->text());


    ui->comboBox->clear();
    ui->comboBox->addItems(accountlist);

}


void MainWindow::on_actionGithub_triggered()
{
    QMessageBox::warning(this,"Not Implemented", "This button isn't implemented yet");
}


void MainWindow::on_actionLicense_triggered()
{
    QMessageBox::information(this,"License Info", "This product is licensed by the GPL V3 license. For the full license, Please visit https://www.gnu.org/licenses/gpl-3.0.en.html");
}


void MainWindow::on_actionFile_Properties_triggered()
{
    QMessageBox::warning(this,"Not Implemented", "This button isn't implemented yet");
}


void MainWindow::on_actionRoot_Only_2_triggered()
{
    QMessageBox::warning(this,"Not Implemented", "This button isn't implemented yet");
}


void MainWindow::on_actionFile_Protection_triggered()
{
    QMessageBox::warning(this,"Not Implemented", "This button isn't implemented yet");
}


void MainWindow::on_btnApply_clicked()
{
    QMessageBox::warning(this,"Not Implemented", "This button isn't implemented yet");
}


void MainWindow::on_actionAdd_an_Account_triggered()
{
    QMessageBox::warning(this,"Not Implemented", "This button isn't implemented yet");
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

}


void MainWindow::on_comboBox_textActivated(const QString &arg1)
{
    if(ui->comboBox->currentText() == inputAccountName[1]) {
        ui->editAccountName->setText(inputAnswer1[1]);
        ui->editUsername->setText(inputUsername[1]);
        ui->editPassword->setText(inputPassword[1]);
        ui->editEmail->setText(inputEmail[1]);
        ui->editQuestion1->setText(inputQuestion1[1]);
        ui->editQuestion2->setText(inputQuestion2[1]);
        ui->editAnswer1->setText(inputAnswer1[1]);
        ui->editAnswer2->setText(inputAnswer2[1]);
}
}
