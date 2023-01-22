#ifndef RENTWINDOW_H
#define RENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class rentwindow;
}

class rentwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit rentwindow(QWidget *parent = nullptr);
    ~rentwindow();

private:
    Ui::rentwindow *ui;
};

#endif // RENTWINDOW_H
