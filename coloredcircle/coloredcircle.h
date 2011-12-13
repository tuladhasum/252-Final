#ifndef _COLOREDCIRCLE_H_
#define _COLOREDCIRCLE_H_
#include "circle.h"
using namespace std;
enum Colors {RED,GREEN,BLUE,PURPLE,ORANGE,YELLOW,WHITE,BLACK};

class ColoredCircle : public Circle
{
   public:
      ColoredCircle(double r=0, Colors c=BLACK);
      void setColor(Colors c);
      Colors getColor() const;
      bool operator == (const ColoredCircle&) const;
   private:
      Colors color;
};


ostream& operator<<(ostream&,const ColoredCircle&);

#endif
