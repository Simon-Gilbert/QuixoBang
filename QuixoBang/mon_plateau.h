#ifndef MON_PLATEAU_H
#define MON_PLATEAU_H

#include <QMainWindow>

namespace Ui {
class mon_plateau;
}

class mon_plateau : public QMainWindow
{
    Q_OBJECT

public:
    explicit mon_plateau(QWidget *parent = 0);
    ~mon_plateau();

private slots:
    void on_btnQuit_clicked();

private:
    Ui::mon_plateau *ui;
};

#endif // MON_PLATEAU_H
