#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void incrementCount();

private:
    QWidget *centralWidget;
    QVBoxLayout *layout;
    QPushButton *incrementButton;
    QLabel *countLabel;
    int count;
};

#endif // MAINWINDOW_H
