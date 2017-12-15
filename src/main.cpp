#include <iostream>
#include "ball.h"
#include "circle.h"
#include "cylinder.h"
#include "square.h"

using namespace std;

int main()
{
    Circle circle(5.0, 2.0, 3.0);/**< Test the Circle class */
    cout << "The Circle Data:"
         << "\n\tRadius = \t" << circle.getR()
         << "\n\tPerimeter = \t" << circle.getPerimeter()
         << "\n\tArea = \t\t" << circle.getArea()
         << "\n\tPosition = \t" << "( " << circle.getCenterPositionX()
                              << " , " << circle.getCenterPositionY() << " )"
         << endl;

    Square square(5.0, 4.0, 5.0);/**< Test the Square class */
    cout << "\nThe Square Data:"
         << "\n\tWidth = \t" << square.getWidth()
         << "\n\tPerimeter = \t" << square.getPerimeter()
         << "\n\tArea = \t\t" << square.getArea()
         << "\n\tPosition = \t" << "( " << square.getCenterPositionX()
                              << " , " << square.getCenterPositionY() << " )"
         << "\n\tUp-Left Vertex Position = \t" << "( " << square.getVertexX()
                              << " , " << square.getVertexY() << " )"
         << endl;

    double ballCenter[3] = {2.0, 3.0, 4.0};/**< Test the Ball class */
    Ball ball(ballCenter, 5.0);
    cout << "\nThe Ball Data:"
         << "\n\tRadius = \t" << ball.getR()
         << "\n\tSurface Area = \t" << ball.surfaceArea()
         << "\n\tVolume = \t" << ball.volume()
         << "\n\tCenter Position = \t" << "( " << ball.getCenter()[0]
                                     << " , " << ball.getCenter()[1]
                                     << " , " << ball.getCenter()[2] << " )"
         << endl;

    double cylinderCenter[2] = {2.0, 3.0};/**< test the Cylinder class */
    Cylinder cylinder(cylinderCenter, 5.0, 6.0);
    cout << "\nThe Cylinder Data:"
         << "\n\tRadius = \t" << cylinder.getR()
         << "\n\tHeight = \t" << cylinder.getHeight()
         << "\n\tSurface Area = \t" << cylinder.surfaceArea()
         << "\n\tVolume = \t" << cylinder.volume()
         << "\n\tBottom Center Position = \t" << "( " << cylinder.getBottomCenter()[0]
                                            << " , " << cylinder.getBottomCenter()[1] << " )"
         << endl;

    return 0;
}
