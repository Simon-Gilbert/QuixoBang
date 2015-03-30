#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class piece : public QGraphicsPixmapItem
{   
public:
    enum couleurPiece { pieceNeutre=0, pieceRond, pieceCroix};
        explicit piece();
        explicit piece(couleurPiece _couleur, int16_t _x, int16_t _y);

        bool isSelectionnable();
        int16_t x;
        int16_t y;

protected:
        //void mousePressEvent(QGraphicsSceneMouseEvent * event);
        //void mouseMoveEvent(QGraphicsSceneMouseEvent * event);

private:
    std::vector<QPixmap *> pixmapCollection;
    couleurPiece couleur;


};

#endif // PIECE_H
