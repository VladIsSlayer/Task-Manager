#ifndef MAINWINDOW_H    //Защита от повторного включения
#define MAINWINDOW_H    //Если еще не определен, определяем его

#include <QMainWindow>  // Подключает базовый класс главного окна

QT_BEGIN_NAMESPACE      // начинает пространства имен Qt
namespace Ui {          // Внутри  пространства имен ui
class MainWindow;       // Предварительное объявление класса MainWindow
}
QT_END_NAMESPACE        // Конец пространства имен Qt

class MainWindow : public QMainWindow           //инициализируется класс MainWindow, наследующийся от класса QMainWindow
{
    Q_OBJECT                                    //Макрос qt для работы с сигналами и слотами

public:
    MainWindow(QWidget *parent = nullptr);      //Конструктор с параметром по умолчанию
    ~MainWindow();                              //декструктор

private slots:                                  //Приватные слоты, то есть события
    void on_CreateTask_clicked();

    void on_ShowTasks_clicked();

    void on_DeleteTask_clicked();

private:                                        //приватные члены клаасса
    Ui::MainWindow *ui;                         //указатель на объект интерфейса
};
#endif // MAINWINDOW_H
