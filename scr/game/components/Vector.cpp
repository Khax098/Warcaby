

#include "Vector.hpp"

namespace game
{

namespace components
{

enum assertion { Error = 2 };



uint8_t& Vector::operator[](int coordinate)
{
    return (coordinate == 0 ? coordinateX : coordinateY); 
}

uint8_t Vector::operator[](int coordinate) const
{
    return (coordinate == 0 ? coordinateX : coordinateY); 
}


} // namespace components
} // namespace game