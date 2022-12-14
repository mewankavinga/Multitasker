#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class calculator;
}

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();
};

#endif // CALCULATOR_H
