#ifndef ACCOUNTCREATIONSCREEN_H
#define ACCOUNTCREATIONSCREEN_H

#include <QDialog>

#include <QFile>
#include <QFileInfo>
#include <QDir>
#include <QFileInfoList>
#include <QListWidgetItem>

namespace Ui {
class accountCreationScreen;
}

class accountCreationScreen : public QDialog
{
    Q_OBJECT

public:
    explicit accountCreationScreen(QWidget *parent = nullptr);
    ~accountCreationScreen();

private slots:
    void on_checkbox_Secret_stateChanged(int arg1);

    void on_btnCancel_clicked();

    void on_btnSave_clicked();

private:
    Ui::accountCreationScreen *ui;
};

#endif // ACCOUNTCREATIONSCREEN_H
