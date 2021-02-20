#pragma once
#include "ChessPiece.hpp"
/*    Rook class is derieved from class ChessPiece
 * */
Class Rook : protected ChessPiece
{
    explicit Rook(const Row, const Col);
    void move(const Row,const Col);
    ~Rook();
};
