#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);          //UI 요소를 띄운다. (.ui)

    label = new QLabel("Hello World!", this);
    label->setGeometry(100, 120, 100, 40);

    button = new QPushButton("눌러봐", this);
    button->setGeometry(100, 160, 100, 40);

    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

void MainWindow::onButtonClicked()
{
    label->setText("버튼 눌렸어!");
}

MainWindow::~MainWindow()
{
    delete ui;
}
