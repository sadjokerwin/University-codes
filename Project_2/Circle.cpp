#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;
bool Circle::isValid(double x, double y, double r)
{
    return (x - r) > 0 || (y - r) > 0;
}
void Circle::print()
{
    cout << "The circle has center coordinates - (" << getX() << "," << getY() << ")"
         << mR << " and is " << mColour << "in colour." << endl;
}
void Circle::translate(size_t index, double vertTransl, double horizTransl)
{
    if (getX()+horizTransl<0)
        setX(mR);
    else
        setX(getX() + horizTransl);
    if (getY() + horizTransl < 0)
        setY(mR);
    else
        setY(getY() + horizTransl);
}
bool Circle::isWithinCircle(double x, double y, double r)
{
    return r >= (lengthBtwn2points(x, y, getX(), getY()) + mR);
}
bool Circle::isWithinRect(double x, double y, double height, double width)
{
    return ((getX() - mR) >= x) &&
           ((getX() + mR) <= x + width) &&
           ((getY() - mR) >= y) &&
           ((getY() + mR) <= y + height);
}
Circle::Circle(double x, double y, double r, char *colour) : Shape(x, y)
{
    mR = r;
    mColour = colour;
}