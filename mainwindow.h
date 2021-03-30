#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshDisplays();

private slots:

    void on_minutesDial_valueChanged(int value);

    void on_secondsDial_valueChanged(int value);

    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
