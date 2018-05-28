#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <vector>



#include "model/housemodel.h"
#include "view/houseview.h"
#include "controller/housecontroller.h"
#include "controller/icontroller.h"
#include "controller/decorator/changefigurecontrollerdecorator.h"
#include "controller/decorator/movefigurecontrollerdecorator.h"

#include "abstractdecoratorfactory.h"
#include "movefiguredecoratorfactory.h"
#include "editfiguredecoratorfactory.h"

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
    Kameiros::View::IView* activeView;

    void addDecorator(AbstractDecoratorFactory* factory);
    void removeDecorator();

};

#endif // MAINWINDOW_H
