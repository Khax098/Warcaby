
#pragma once
#include "enumPawn.hpp"

namespace game
{

class Pawn
{
private:
  PawnType pawnType;
  PawnTeam pawnColor;
  uint8_t  coordinateX, coordinateY;

public:
  Pawn();
  ~Pawn() = default;

  PawnType &getPawnType();
  PawnType  getPawnType() const;
  PawnTeam &getPawnColor();
  PawnTeam  getPawnColor() const;
};

}; // namespace game