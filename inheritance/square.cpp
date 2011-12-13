#include "square.h"

Square::Square(double side)
{
   rectangleType::setDimension(side,side);
}

double Square::getSide() const
{
   return getLength();
}

void Square::setDimension(double side)
{
   rectangleType::setDimension(side,side);
}
