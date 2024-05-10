#ifndef SNAKE_H
#define SNAKE_H

#include <QMainWindow>

namespace Ui {
class Snake;
}

class Snake : public QMainWindow
{
    Q_OBJECT

public:
    explicit Snake(QWidget *parent = nullptr);
    ~Snake();

private:
    Ui::Snake *ui;
};

#endif // SNAKE_H
