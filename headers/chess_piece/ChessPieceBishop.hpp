#pragma once
#include "ChessPiece.hpp"
/*    Bishop class is derieved from class ChessPiece
 * */
Class Bishop : protected ChessPiece
{
    explicit Bishop(const Row, const Col);
    void move(const Row,const Col);
    ~Bishop();
};
