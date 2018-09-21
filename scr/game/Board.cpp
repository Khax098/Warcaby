#include "Board.hpp"

namespace game {

game::Board::Board()
{
    const int pawnsAmount = 24;

    pawns.resize(pawnsAmount);

    //Zainicjować wstępne położenie na polach grych tzn. koordynaty
    for(size_t i = 0; i < pawnsAmount/2; i++)
    {
        pawns[i].getPawnColor()=TeamBlack;
        pawns[i].getPawnType() =ModePawn;

    }

    for(size_t i = pawnsAmount/2; i < pawnsAmount; i++)
    {
        pawns[i].getPawnColor()=TeamWhite;
        pawns[i].getPawnType() =ModePawn;
        
    }
    
}
} //namespace game