#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "timer.h"
#include "iostream"
#include "ui_countdown.h"

timer* sleepTimer = new timer;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ui->minutesBox->setValue(sleepTimer->getMin());
    ui->secondsBox->setValue(sleepTimer->getSec());
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_minutesDial_valueChanged(int value) {
    sleepTimer->setMin(value);
    refreshDisplays();
}

void MainWindow::on_secondsDial_valueChanged(int value) {
    sleepTimer->setSec(value);
    refreshDisplays();
}

void MainWindow::refreshDisplays() {
    ui->minutesBox->setValue(sleepTimer->getMin());
    ui->secondsBox->setValue(sleepTimer->getSec());
}

void MainWindow::on_startButton_clicked() {
    std::cout << "Start Button Click" << std::endl;
    hide();
}
