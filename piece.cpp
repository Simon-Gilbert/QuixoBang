#include "piece.h"


piece::piece() :
    QGraphicsPixmapItem(),
    x(0),
    y(0),
    couleur(pieceNeutre)

{
    pixmapCollection.push_back(new QPixmap(":/neutre.png"));
    pixmapCollection.push_back(new QPixmap(":/rond.png"));
    pixmapCollection.push_back(new QPixmap(":/croix.png"));
}

piece::piece(couleurPiece _couleur, int16_t _x, int16_t _y) :
    //TODO
{
    //TODO
}

bool piece::isSelectionnable()


{


}
