#include "createtaskdialog.h" // импортирует функции из файла
#include "ui_createtaskdialog.h"    //подключаем сгенерированный UI файл


CreateTaskDialog::CreateTaskDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateTaskDialog)
{
    ui->setupUi(this);  //настраиваем интерфейс

    //здесь можно добавить дополнительную настройку диалога
    setWindowTitle("Создать новую задачу");
}

CreateTaskDialog::~CreateTaskDialog()
{
    delete ui;  //освобождаем память
}
