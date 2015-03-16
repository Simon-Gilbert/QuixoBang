#include "mon_plateau.h"
#include "ui_mon_plateau.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>

mon_plateau::mon_plateau(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mon_plateau)
{
    ui->setupUi(this);
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();

    QGraphicsPixmapItem * my_item;
    my_item = new QGraphicsPixmapItem();

    QPixmap * image = new QPixmap(":/test.jpg");
    my_item -> setPixmap(* image);
    ma_scene -> addItem(my_item);
    ui-> ma_vue -> setScene(ma_scene);


}

mon_plateau::~mon_plateau()
{
    delete ui;
}

void mon_plateau::on_btnQuit_clicked()
{
    this->close();
}
