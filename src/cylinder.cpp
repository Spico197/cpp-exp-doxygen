#include "cylinder.h"
Cylinder::Cylinder()
{
    bottomCenter = new double[3];
    r = 0.0;
    height = 0.0;
}
Cylinder::Cylinder(double* bottomCenterTmp, double rTmp, double heightTmp)
{
    bottomCenter = bottomCenterTmp;
    r = rTmp;
    height = heightTmp;
}
double* Cylinder::getBottomCenter() const
{
    return bottomCenter;
}
double Cylinder::getR() const
{
    return r;
}
double Cylinder::getHeight() const
{
    return height;
}
void Cylinder::setBottomCenter(double* centerTmp)
{
    try
    {
        if (sizeof(centerTmp)/sizeof(centerTmp[0]) == 2)
        {
            for (int i = 0; i < 2; i++)
                bottomCenter[i] = centerTmp[i];
        }
        else
            throw 1;
    }
    catch(int)
    {
        std::cout << "CENTER NUMBER MISMATCH!" << std::endl;
    }
}
void Cylinder::setR(double rTmp)
{
    r = rTmp;
}
void Cylinder::setHeight(double heightTmp)
{
    height = heightTmp;
}
double Cylinder::surfaceArea()
{
    return 2.0*PI_CYLINDER*r*height + PI_CYLINDER*r*r*2.0;
}
double Cylinder::volume()
{
    return PI_CYLINDER*r*r*height;
}
