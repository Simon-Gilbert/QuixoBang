#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class piece : public QObject
{   
public:
    enum couleurPiece { pieceNeutre=0, pieceRond, pieceCroix};
        explicit Piece();
        explicit Piece(couleurPiece _couleur, int16_t _x, int16_t _y);

        bool isSelectionnable();
        int16_t x;
        int16_t y;

protected:
        void mousePressEvent(QGraphicsSceneMouseEvent * event);
        void mouseMoveEvent

};

#endif // PIECE_H
