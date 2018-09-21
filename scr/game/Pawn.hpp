
#pragma once
#include "enumPawn.hpp"
#include "\components\Vector.hpp"

namespace game
{
  
class Pawn
{
private:
  PawnType pawnType;
  PawnTeam pawnColor;
  Vector coordinate;

public:
  Pawn();
  ~Pawn() = default;

  PawnType &getPawnType();
  PawnType  getPawnType() const;
  PawnTeam &getPawnColor();
  PawnTeam  getPawnColor() const;
};

}; // namespace game