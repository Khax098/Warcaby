
#pragma once
#include <cstdint>

namespace game
{
namespace components
{

class Vector
{
  private:
    uint8_t coordinateX, coordinateY;

  public:

  uint8_t& operator[](int);
  uint8_t  operator[](int) const;
};

} // namespace components
} // namespace game