#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "rectangleType.h"

class Square : public rectangleType
{
   public:
      Square(double side=0);
      void setDimension(double);
      double getSide() const;
};

#endif
