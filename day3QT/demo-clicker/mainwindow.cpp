#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    layout = new QVBoxLayout(centralWidget);

    incrementButton = new QPushButton("Increment", this);
    layout->addWidget(incrementButton);

    countLabel = new QLabel("Count: 0", this);
    layout->addWidget(countLabel);

    count = 0;

    connect(incrementButton, &QPushButton::clicked, this, &MainWindow::incrementCount);
}

MainWindow::~MainWindow()
{
    delete layout;
}

void MainWindow::incrementCount()
{
    count++;
    countLabel->setText("Count: " + QString::number(count));
}
