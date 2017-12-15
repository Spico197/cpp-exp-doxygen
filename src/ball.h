#ifndef _BALL_H_
#define _BALL_H_

/********************************************//**
 * \brief ball.h, the class Ball definition
 *
 ***********************************************/
#include "threedimshape.h"

#define PI_BALL 3.14159265359
class Ball:public ThreeDimShape
{
private:
    double* center;
    double r;
public:
    /********************************************//**
     * \brief the ball constructor
     *
     * \param None
     * \param None
     * \return None
     *
     ***********************************************/
    Ball();

    /********************************************//**
     * \brief ball overload constructor function
     *
     * \param (double*)centerTmp the centor coordinate, 3values
     * \param (double)rTmp the ball radius
     * \return None
     *
     ***********************************************/
    Ball(double* centerTmp, double rTmp);

    /********************************************//**
     * \brief get the center coordinate of ball
     *
     * \return (double*)center a three-by-one center coordinate
     *
     ***********************************************/
    double* getCenter() const;

    /********************************************//**
     * \brief get the radius of ball
     *
     * \return (double)radius a double type radius of ball
     *
     ***********************************************/
    double getR() const;

    /********************************************//**
     * \brief set the center coordinate by a three-by-one array
     *
     * \param centerTmp double*
     * \return void
     *
     ***********************************************/
    void setCenter(double* centerTmp);

    /********************************************//**
     * \brief set the radius of ball
     *
     * \param rTmp double the radius which is ready to assign to the radius
     * \return void
     *
     ***********************************************/
    void setR(double rTmp);
    /********************************************//**
     * \brief get the surface area of the ball
     *
     * \return double the surface area result
     *
     ***********************************************/
    double surfaceArea();
    /********************************************//**
     * \brief get the volume of the ball
     *
     * \return double the volume value
     *
     ***********************************************/
    double volume();
};

#endif // _BALL_H_
