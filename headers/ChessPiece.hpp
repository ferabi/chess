#pragma once
/*    Abstract Class ChessPiece
 *
 * */
class ChessPiece{

    public: 
        //move takes the row and column number as first and second 
        //paramter, to which to move the ChessPiece
        virtual void move(const int, const int) = 0;
};

/*    Pawn Class
 * */

class Pawn : public ChessPiece{

    public:
        void move(const int, const int);

};

/*    King Class
 * */

class King : public ChessPiece{

    public:
        void move(const int, const int);

};

/*    Queen Class
 * */

class Queen : public ChessPiece{

    public:
        void move(const int, const int);

};
