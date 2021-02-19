#pragma once
/*    Enums for Rows and Columns of a chess board
 *    -enumerates rows and columns with appropriate
 *     alphanumeric names
 *    -zero_row and zero_col represent kiled entities
 * */
enum struct Row{zero_row,a,b,c,d,e,f,g,h};
enum struct Col{zero_col,one,two,three,four,five,six,seven,eight};
/*    Abstract Class ChessPiece
 *    -Private members m_row,m_col store the current 
 *     location of the chesspiece
 * */
class ChessPiece{

    private:

        //Row of the ChessPiece
        Row m_row;

        //Column of the ChessPiece
        Col m_col;
    public:

        //Explicit initialisation through constructor
        //and it takes Row and Col
        explicit ChessPiece(const Row, const Col);

        //getRow gives the row of the ChessPiece
        Row getRow(const ChessPiece&);

        //getCol gives the column of the ChessPiece
        Col getCol(const ChessPiece&);

        //setRow sets the row of the ChessPiece
        void setRow(const Row);

        //setCol sets the col of the ChessPiece
        void setCol(const Col);

        //move takes the row and column, to which to 
        //move the ChessPiece
        virtual move(const Row, const Col) = 0;

        //Destructor for the ChessPiece
        ~ChessPiece();
};
