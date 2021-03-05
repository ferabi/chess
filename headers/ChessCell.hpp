/*
 *     ChessCell is a class for representing a unit cell
 *     in a chess board. Members are:
 *     1) Row number - int
 *     2) Column number -int
 *     3) ChessPiece pointer pointing to a specific chess piece 
 * */
#pragma once
#include <memory>

class ChessCell
{
    protected:
        //m_row is the row number
        const int m_row;
        
        //m_column is the column number
        const int m_column;

        //m_chessPiece is the chess_piece the cell holds
        ChessPiece* m_chessPiece;

    public:
        explicit ChessCell(int,int,ChessPiece&);
};
