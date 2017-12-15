#include "ball.h"
Ball::Ball()
{
    center = new double[3];
    r = 0.0;
}
Ball::Ball(double* centerTmp, double rTmp)
{
    center = centerTmp;
    r = rTmp;
}
double* Ball::getCenter() const
{
    return center;
}
double Ball::getR() const
{
    return r;
}
void Ball::setCenter(double* centerTmp)
{
    try
    {
        if (sizeof(centerTmp)/sizeof(centerTmp[0]) == 3)
        {
            for (int i = 0; i < 3; i++)
                center[i] = centerTmp[i];
        }
        else
        {
            std::cout << "\n\n/* ----- Point Size = " << sizeof(centerTmp)/sizeof(centerTmp[0]) << " ----- */" << std::endl;
            throw 1;
        }
    }
    catch(int)
    {
        std::cout << "CENTER NUMBER MISMATCH!\n\n" << std::endl;
    }
}
void Ball::setR(double rTmp)
{
    r = rTmp;
}
double Ball::surfaceArea()
{
    return 4*PI_BALL*r*r;
}
double Ball::volume()
{
    return 4.0/3.0*PI_BALL*r*r;
}
