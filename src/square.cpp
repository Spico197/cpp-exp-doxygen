#include "square.h"
/* ---------- Square ---------- */
Square::Square()
{
    width = 0.0;
    setCenterPositionX(0.0);
    setCenterPositionY(0.0);
}
Square::Square(double widthTmp, double centerPositionXTmp, double centerPositionYTmp)
{
    width = widthTmp;
    setCenterPositionX(centerPositionXTmp);
    setCenterPositionY(centerPositionYTmp);
}
double Square::getWidth() const
{
    return width;
}
double Square::getVertexX()
{
    return getCenterPositionX() - width/2;
}
double Square::getVertexY()
{
    return getCenterPositionY() + width/2;
}
void Square::setWidth(double widthTmp)
{
    width = widthTmp;
}
double Square::calcPerimeter()
{
    setPerimeter(width*4);
    return 4*width;
}
double Square::calcArea()
{
    setArea(width*width);
    return width*width;
}
