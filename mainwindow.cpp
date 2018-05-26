#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Kameiros::Model::HouseModel* model = new Kameiros::Model::HouseModel(this);
    model->setPosition(QPoint(0, 0));

    Kameiros::View::HouseView* view = new Kameiros::View::HouseView(model, this);
    activeController = new Kameiros::Controller::HouseController(model, view);

    connect(ui->actionEdit_ObjectOutline, &QAction::triggered, this, &MainWindow::on_radioButton_toggled);
    connect(ui->actionMove_Object, &QAction::triggered, this, &MainWindow::on_radioButton_2_toggled);


    models.push_back(model);

    ui->widget->addObjectView(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    if(checked){
        addDecorator(new Kameiros::Controller::Decorator::ChangeFigureControllerDecorator(activeController));
    }else{
        removeDecorator();
    }
}

void MainWindow::on_radioButton_2_toggled(bool checked)
{
    if(checked){
        addDecorator(new Kameiros::Controller::Decorator::MoveFigureControllerDecorator(activeController));
    }else{
        removeDecorator();
    }
}

void MainWindow::addDecorator(Kameiros::Controller::IController *decorator)
{
    activeController = decorator;

    auto view = static_cast<Kameiros::View::HouseView*>(ui->widget->getObjectView(0));
    activeController->connectMouseSignals(view);
}

void MainWindow::removeDecorator()
{
    if(auto decorator = static_cast<Kameiros::Controller::Decorator::IDecorator*>(activeController)){
        auto view = static_cast<Kameiros::View::HouseView*>(ui->widget->getObjectView(0));
        decorator->disconnectMouseSignals(view);

        activeController = decorator->getInner();
        delete decorator;
    }
}
