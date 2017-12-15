#include "circle.h"
/* ---------- Circle ---------- */
Circle::Circle()
{
    r = 0.0;
    setCenterPositionX(0.0);
    setCenterPositionY(0.0);
}
Circle::Circle(double rTmp, double centerPositionXTmp, double centerPositionYTmp)
{
    r = rTmp;
    setCenterPositionX(centerPositionXTmp);
    setCenterPositionY(centerPositionYTmp);
}
double Circle::getR() const
{
    return r;
}
void Circle::setR(double rTmp)
{
    r = rTmp;
}
double Circle::calcPerimeter()
{
    double perimeterTmp = 2*3.14159265359*r;
    setPerimeter(perimeterTmp);
    return perimeterTmp;
}
double Circle::calcArea()
{
    double areaTmp = 3.14159265359*r*r;
    setArea(areaTmp);
    return areaTmp;
}
