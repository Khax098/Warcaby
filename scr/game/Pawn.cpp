
#include "Pawn.hpp"

namespace game
{

Pawn::Pawn()
{

    pawnType = PawnType::Uknown;
    pawnColor = PawnTeam::Uknown;
    coordinateX = 0;
    coordinateY = 0;
}



PawnType& Pawn::getPawnType()
{
    return pawnType;
}




PawnType Pawn::getPawnType() const
{
    return pawnType;
}




PawnTeam& Pawn::getPawnColor()
{
    return pawnColor;
}




PawnTeam Pawn::getPawnColor() const
{
    return pawnColor;
}

} //namespace game