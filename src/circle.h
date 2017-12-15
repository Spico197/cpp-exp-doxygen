#ifndef _CIRCLE_H
#define _CIRCLE_H_

#include "shape.h"

class Circle:public Shape
{
private:
    double r;/**< the Circle radius */
public:
    Circle();/**< Circle constructor */
    /********************************************//**
     * \brief the overload circle constructor
     *
     * \param rTmp double: the radius
     * \param centerPositionXTmp=0.0 double: the position X of center coordinate
     * \param centerPositionYTmp=0.0 double: the position Y of center coordinate
     *
     ***********************************************/
    Circle(double rTmp, double centerPositionXTmp=0.0, double centerPositionYTmp=0.0);
    double getR() const;/**< get the radius */
    void setR(double rTmp);/**< set the radius of circle */
    double calcPerimeter();/**< get the circle perimeter */
    double calcArea();/**< get the circle area */
};

#endif // _CIRCLE_H
