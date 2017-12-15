#ifndef _THREEDIMSHAPE_H_
#define _THREEDIMSHAPE_H_

#include <iostream>

class ThreeDimShape
{
public:
    /********************************************//**
     * \brief the pure-virtual function to return the surface area
     *
     * \return virtual double
     *
     ***********************************************/
    virtual double surfaceArea() = 0;
    /********************************************//**
     * \brief the pure-virtual function to return the volume
     *
     * \return virtual double
     *
     ***********************************************/
    virtual double volume() = 0;
};

#endif // _THREEDIMSHAPE_H_
