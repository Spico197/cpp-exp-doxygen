#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "shape.h"

class Square:public Shape
{
private:
    double width;/**< The Square width */
public:
    Square();/**< The Square class default constructor */
    /********************************************//**
     * \brief The Square class overload constructor
     *
     * \param widthTmp double: the width value
     * \param centerPositionXTmp=0.0 double: the horizontal ordinate of center position
     * \param centerPositionYTmp=0.0 double: the vertical ordinate of center position
     *
     ***********************************************/
    Square(double widthTmp, double centerPositionXTmp=0.0, double centerPositionYTmp=0.0);
    double getWidth() const;/**< get the Square width */
    double getVertexX();/**< get the position X of Square up-left vertex coordinate*/
    double getVertexY();/**< get the vertical ordinate */
    void setWidth(double widthTmp);/**< set the width */
    double calcPerimeter();/**< calculate the perimeter of Square */
    double calcArea();/**< calculate the Area of Square */
};

#endif // _SQUARE_H_
