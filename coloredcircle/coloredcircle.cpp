#include "coloredcircle.h"
using namespace std;

bool ColoredCircle::operator==(const ColoredCircle& other) const
{
   return radius() == other.radius() &&
          getColor() == other.getColor();
}

ColoredCircle::ColoredCircle(double r,Colors c): Circle(r),color(c)
{
}

void ColoredCircle::setColor(Colors c)
{
   color = c;
}

Colors ColoredCircle::getColor() const
{
   return color;
}

ostream& operator<<(ostream& o, const ColoredCircle& c)
{
   o << "area: " << c.area() << endl;
   o << "color: ";
   switch (c.getColor())
   {
      case RED    : o << "RED\n"; break;
      case GREEN  : o << "GREEN\n"; break;
      case BLUE   : o << "BLUE\n"; break;
      case PURPLE : o << "PURPLE\n"; break;
      case ORANGE : o << "ORANGE\n"; break;
      case YELLOW : o << "YELLOW\n"; break;
      case WHITE  : o << "WHITE\n"; break;
      case BLACK  : o << "BLACK\n"; break;
   }
   return o;
}
