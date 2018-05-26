#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <vector>



#include "housemodel.h"
#include "houseview.h"
#include "housecontroller.h"
#include "icontroller.h"
#include "changefigurecontrollerdecorator.h"
#include "movefigurecontrollerdecorator.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

private:
    Ui::MainWindow *ui;

    std::vector<Kameiros::Controller::AbstractController*> controllers;

    std::vector<Kameiros::Model::AbstractModel*> models;

    Kameiros::Controller::IController* activeController;

    void addDecorator(Kameiros::Controller::IController* decorator);
    void removeDecorator();

};

#endif // MAINWINDOW_H
