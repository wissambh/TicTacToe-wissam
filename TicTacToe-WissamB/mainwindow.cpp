#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // place chaque bouton dans le tableau Case
    Case[1] = ui->pushButton_1;
    Case[2] = ui->pushButton_2;
    Case[3] = ui->pushButton_3;
    Case[4] = ui->pushButton_4;
    Case[5] = ui->pushButton_5;
    Case[6] = ui->pushButton_6;
    Case[7] = ui->pushButton_7;
    Case[8] = ui->pushButton_8;
    Case[9] = ui->pushButton_9;

    Case[2]->setText("O");

}

MainWindow::~MainWindow()
{
    delete ui;
}

// vérifie sur la case est vide
bool MainWindow::caseVide(int n) {
    if (Case[n]->text() != "") {
        return false;
    } else {
        return true;
    }
}

// coche la case n avec X ou O
void MainWindow::joue(int n, QString coche) {
    if (caseVide(n)) {
        Case[n]->setText(coche);
    }

}


// action sur les boutons
void MainWindow::on_pushButton_1_released()
{
    joue(1,"X");
}

void MainWindow::on_pushButton_2_released()
{
    joue(2,"X");
}


void MainWindow::on_pushButton_3_released()
{
    joue(3,"X");
}


void MainWindow::on_pushButton_4_released()
{
    joue(4,"X");
}


void MainWindow::on_pushButton_5_released()
{
    joue(5,"X");
}


void MainWindow::on_pushButton_6_released()
{
    joue(6,"X");
}


void MainWindow::on_pushButton_7_released()
{
    joue(7,"X");
}


void MainWindow::on_pushButton_8_released()
{
    joue(8,"X");
}


void MainWindow::on_pushButton_9_released()
{
    joue(9,"X");
}

