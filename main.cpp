#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    // dynamic allocations
    QWidget *centralWidget = new QWidget(&w);
    QVBoxLayout *vLayout = new QVBoxLayout;
    QHBoxLayout *hLayout = new QHBoxLayout;
    QLabel *label = new QLabel("Enter..");
    QLineEdit *input = new QLineEdit;
    QPushButton *button =  new QPushButton("submit");

    // vertical layout
    vLayout->addWidget(label);
    vLayout->addWidget(input);
    vLayout->addWidget(button);

    // set up main window
    centralWidget->setLayout(vLayout);
    w.setCentralWidget(centralWidget);
    w.show();
    return a.exec();
}
