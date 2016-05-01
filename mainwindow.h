#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QString>
#include <QObject>
#include <vector>
#include "number.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //set
    void addNumber(Number* num);
    
private:
    Ui::MainWindow *ui;
    std::vector<Number*> m_num;
    std::vector<unsigned> m_allNums;
};

#endif // MAINWINDOW_H
