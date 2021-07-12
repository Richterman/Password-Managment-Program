#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMessageBox>

#include "accountcreationscreen.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbout_Qt_triggered();

    void on_btnCreateAccount_clicked();

    void on_btnCancel_clicked();

    void on_btnSave_clicked();

    void on_actionGithub_triggered();

    void on_actionLicense_triggered();

    void on_actionFile_Properties_triggered();

    void on_actionRoot_Only_2_triggered();

    void on_actionFile_Protection_triggered();

    void on_btnApply_clicked();

    void on_actionAdd_an_Account_triggered();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_textActivated(const QString &arg1);

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
