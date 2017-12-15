#ifndef _CYLINDER_H_
#define _CYLINDER_H_

#include "threedimshape.h"
#define PI_CYLINDER 3.14159265359

class Cylinder:public ThreeDimShape
{
private:
    double* bottomCenter;/**< Cylinder's bottom center coordinate */
    double r;/**< the radius of Cylinder's bottom circle */
    double height;/**< the height of cylinder */
public:
    Cylinder();/**< the default constructor of Cylinder */
    /********************************************//**
     * \brief the overload constructor of Cylinder
     *
     * \param bottomCenterTmp double*: the bottom center coordinate, which is a 2-by-1 array
     * \param rTmp double: the bottom circle's radius
     * \param heightTmp double: the height of Cylinder
     *
     ***********************************************/
    Cylinder(double* bottomCenterTmp, double rTmp, double heightTmp);
    double* getBottomCenter() const;/**< get the bottom center coordinate, a pointer to double[2] array */
    double getR() const;/**< get the radius */
    double getHeight() const;/**< get the height */
    void setBottomCenter(double* centerTmp);/**< use a 2-by-1 double[2] array to set the bottom circle's center coordinate */
    void setR(double rTmp);/**< set the radius of bottom circle */
    void setHeight(double heightTmp);/**< set the cylinder's height */
    double surfaceArea();/**< get the surface area */
    double volume();/**< get the volume of this cylinder */
};

#endif // _CYLINDER_H_
