#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Kameiros::Model::HouseModel* model = new Kameiros::Model::HouseModel(this);
    model->setPosition(QPoint(0, 0));

    QPolygonF p;
    p << QPointF(0.0, 0.0);
    p << QPointF(100.0, 0.0);
    p << QPointF(100.0, 100.0);
    p << QPointF(0.0, 150.0);
    model->setOutline(p);

    Kameiros::View::HouseView* view = new Kameiros::View::HouseView(model, nullptr);
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
        addDecorator(new MoveFigureDecoratorFactory());
    }else{
        removeDecorator();
    }
}

void MainWindow::on_radioButton_2_toggled(bool checked)
{
    if(checked){
        addDecorator(new EditFigureDecoratorFactory());
    }else{
        removeDecorator();
    }
}

void MainWindow::addDecorator(AbstractDecoratorFactory* factory)
{
    auto view = ui->widget->getObjectView(1);
    if(view == nullptr){
        qDebug() << ":(";
    }

    activeController = factory->createControllerDecorator(activeController);

    if(auto hosueView = dynamic_cast<Kameiros::View::IView*>(view)){
        activeController->connectMouseSignals(dynamic_cast<Kameiros::View::IView*>(view));
    }else{
        qDebug() << "Shady Character";
    }


    activeView = factory->createViewDecorator(dynamic_cast<Kameiros::View::IView*>(view));
}

void MainWindow::removeDecorator()
{
  delete activeView;
}
