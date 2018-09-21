
#pragma once
#include <cstdint>

namespace game{

enum PawnType : uint8_t
{
  ModeQueen = 0,
  ModePawn  = 1,
  Uknown    = 2
};

enum PawnTeam : uint8_t
{
  TeamBlack = 0,
  TeamWhite = 1,
  Uknown    = 2
};

}