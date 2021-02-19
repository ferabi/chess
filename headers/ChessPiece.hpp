#pragma once

enum struct Row{zero_row,a,b,c,d,e,f,g,h};
enum struct Col{zero_col,one,two,three,four,five,six,seven,eight};

class ChessPiece{

    private:
        Row m_row;
        Col m_col;
    public:
        explicit ChessPiece(const Row, const Col);
        Row getRow(const ChessPiece&);
        Col getCol(const ChessPiece&);
        void setRow(const Row);
        void setCol(const Col);
        virtual move(const Row, const Col) = 0;
        ~ChessPiece();
};
