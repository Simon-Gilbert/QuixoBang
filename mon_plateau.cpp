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
    QGraphicsPixmapItem * plateau[5][5];


        // Déclaration des images pour les pièces
        QPixmap * neutre = new QPixmap(":/neutre.jpg");
        QPixmap * rond = new QPixmap(":/rond.jpg");
        QPixmap * croix = new QPixmap(":/croix.jpg");

        QGraphicsScene * ma_scene = new QGraphicsScene(ui->ma_vue);
        QGraphicsPixmapItem * item_neutre = new QGraphicsPixmapItem(* neutre);
        item_neutre ->setOffset(0, 0);
        ma_scene->addItem(item_neutre);

        QGraphicsPixmapItem * item_rond = new QGraphicsPixmapItem(* rond);
        item_rond ->setOffset(0, 0);
        ma_scene->addItem(item_rond);

        QGraphicsPixmapItem * item_croix = new QGraphicsPixmapItem(* croix);
        item_croix ->setOffset(0, 0);
        ma_scene->addItem(item_croix);

        y = 0;
        for (int i = 0; i < 5; i++)
        {
            x = 0;
            y = i*45;
              for (int j = 0; j < 5; j++)
            {
                x = j*45;
                plateau[i][j] = new QGraphicsPixmapItem();
                plateau[i][j]->setPixmap(* neutre);
                ma_scene->addItem(plateau[i][j]);
                plateau[i][j]->setPos(x, y);
            }
        }
        ui->ma_vue->setScene(ma_scene);
    }



mon_plateau::~mon_plateau()
{
    delete ui;
}

void mon_plateau::on_btnQuit_clicked()
{
    this->close();
}
