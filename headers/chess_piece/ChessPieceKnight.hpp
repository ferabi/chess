#pragma once
#include "ChessPiece.hpp"
/*    Knight class is derieved from class ChessPiece
 * */
Class Knight : protected ChessPiece
{
    explicit Knight(const Row, const Col);
    void move(const Row,const Col);
    ~Knight();
};
