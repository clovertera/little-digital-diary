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
    // TODO make it so line edit can expand vertically if user writes a lot
    QLineEdit *input = new QLineEdit;
    QPushButton *button =  new QPushButton("submit");

    // vertical layout
    // TODO add hbox here
    hLayout->addWidget(input);
    hLayout->addWidget(button);
    vLayout->addLayout(hLayout);
    vLayout->addWidget(label);

    // set up main window
    centralWidget->setLayout(vLayout);
    w.setCentralWidget(centralWidget);
    w.show();
    return a.exec();
}
