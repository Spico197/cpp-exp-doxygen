#include "shape.h"

/* ---------- Shape ---------- */
Shape::Shape()
{
    centerPositionX = 0.0;
    centerPositionY = 0.0;
    perimeter = 0.0;
    area = 0.0;
}
Shape::Shape(double centerX, double centerY)
{
    centerPositionX = centerX;
    centerPositionY = centerY;
    perimeter = 0.0;
    area = 0.0;
}
double Shape::calcPerimeter()
{
    return perimeter;
}
double Shape::calcArea()
{
    return area;
}
double Shape::getPerimeter() const
{
    return perimeter;
}
double Shape::getArea() const
{
    return area;
}
double Shape::getCenterPositionX() const
{
    return centerPositionX;
}
double Shape::getCenterPositionY()
{
    return centerPositionY;
}
void Shape::setPerimeter(double perimeterTmp)
{
    perimeter = perimeterTmp;
}
void Shape::setArea(double areaTmp)
{
    area = areaTmp;
}
void Shape::setCenterPositionX(double centerPositionXTmp)
{
    centerPositionX = centerPositionXTmp;
}
void Shape::setCenterPositionY(double centerPositionYTmp)
{
    centerPositionY = centerPositionYTmp;
}
