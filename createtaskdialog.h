#ifndef CREATETASKDIALOG_H
#define CREATETASKDIALOG_H

#include <QDialog>

//предварительное объявление сгенерированного UI класса
namespace Ui{
class CreateTaskDialog;             //Инициализируется класс
}

class CreateTaskDialog : public QDialog
{

    Q_OBJECT                    //Макрос для работы с сигналами/слотами

public:
    explicit CreateTaskDialog(QWidget *parent = nullptr);
    ~CreateTaskDialog();


private:
    Ui::CreateTaskDialog *ui;        //Указатель на сгенерированный UI

};

#endif // CREATETASKDIALOG_H
