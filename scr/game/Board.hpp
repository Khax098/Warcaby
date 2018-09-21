#pragma once

#include <vector>
#include "Pawn.hpp"


namespace game
{

class Board
{
  private:
    std::vector<Pawn> pawns;

  public:
    Board();
    ~Board();
};

} //namespace game