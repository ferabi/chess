#pragma once
#include "headers/ChessCell.hpp"

ChessCell::ChessCell(const int row, const int column,
    ChessPiece& chessPiece):
    m_row(row),m_column(column),m_chessPiece(chessPiece)
{}

