#ifndef PAINT_H
#define PAINT_H

#include<QList>
#include <QMainWindow>

namespace Ui {
class paint;
}

class paint : public QMainWindow
{
    Q_OBJECT

public:
    explicit paint(QWidget *parent = nullptr);
    ~paint();

private:
    Ui::paint *ui;
};

#endif // PAINT_H
