#include "mon_plateau.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mon_plateau w;
    w.show();

    return a.exec();
}
