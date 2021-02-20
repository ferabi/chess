#pragma once
#include "ChessPiece.hpp"
/*    King class is derieved from class ChessPiece
 * */
Class King : protected ChessPiece
{
    explicit King(const Row, const Col);
    void move(const Row,const Col);
    ~King();
};
