#pragma once
#include "ChessPiece.hpp"
/*    Pawn class is derieved from class ChessPiece
 * */
Class Pawn : protected ChessPiece
{
    explicit Pawn(const Row, const Col);
    void move(const Row,const Col);
    ~Pawn();
};
