#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Create the label and set its text
    helloLabel = new QLabel("Hello, World!", this);

    // Set the geometry of the label (x, y, width, height)
    helloLabel->setGeometry(50, 50, 200, 30);

    // Set alignment of the text within the label
    helloLabel->setAlignment(Qt::AlignCenter);

    // Set a font for the label
    QFont font("Arial", 20, QFont::Bold);
    helloLabel->setFont(font);

    // Add the label to the main window
    setCentralWidget(helloLabel);
}

MainWindow::~MainWindow()
{
    delete helloLabel; // Don't forget to clean up the label
}
