#include "mainwindow.h"
#include "ui_mainwindow.h"

double minutesValue = 0;
double secondsValue = 0;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ui->minutesBox->setValue(minutesValue);
    ui->secondsBox->setValue(secondsValue);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_minutesDial_valueChanged(int value) {
    minutesValue = value;
    refreshDisplays();
}

void MainWindow::on_secondsDial_valueChanged(int value) {
    secondsValue = value;
    refreshDisplays();
}

void MainWindow::refreshDisplays() {
    ui->minutesBox->setValue(minutesValue);
    ui->secondsBox->setValue(secondsValue);
}
