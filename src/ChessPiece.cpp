#pragma once
#include "headers/ChessPiece.hpp"

explicit ChessPiece::ChessPiece
    (const Row row, const Col col):
        m_row(row),m_col(col)
{}

Row ChessPiece::getRow(const ChessPiece& piece)
{
    return piece.m_row;
}

Col ChessPiece::getCol(const ChessPiece& piece)
{
    return piece.m_col;
}

void ChessPiece::setRow(const Row row)
{
    m_row = row;
}

void ChessPiece::setCol(const Col col)
{
    m_col = col;
}

ChessPiece::~ChessPiece()
{
    m_row = Row::zero_row;
    m_col = Col::zero_col;
}


