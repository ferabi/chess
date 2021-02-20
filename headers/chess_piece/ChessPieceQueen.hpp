#pragma once
#include "ChessPiece.hpp"
/*    Queen class is derieved from class ChessPiece
 * */
Class Queen : protected ChessPiece
{
    explicit Queen(const Row, const Col);
    void move(const Row,const Col);
    ~Queen();
};
