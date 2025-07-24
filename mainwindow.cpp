#include "mainwindow.h"
#include "ui_mainwindow.h"          // Сгенерированный Qt файл с описанием интерфейса

MainWindow::MainWindow(QWidget *parent) //конструктор главного окна
    : QMainWindow(parent)               //конструктор родительского класса
    , ui(new Ui::MainWindow)            //Создаем объект для работы с UI
{
    ui->setupUi(this);                  //Настройка интерфейса
}

MainWindow::~MainWindow()               //Декструктор
{
    delete ui;                          // Освобождает память
}

void MainWindow::on_CreateTask_clicked()
{

}


void MainWindow::on_ShowTasks_clicked()
{

}


void MainWindow::on_DeleteTask_clicked()
{

}

