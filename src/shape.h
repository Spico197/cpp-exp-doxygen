#ifndef _SHAPE_H_
#define _SHAPE_H_

class Shape
{
private:
    double centerPositionX;/**< Center Position X */
    double centerPositionY;/**< Center Position Y */
    double perimeter;/**< Shape perimeter */
    double area;/**< Shape area */
public:
    /********************************************//**
     * \brief The default Shape constructor
     *
     *
     ***********************************************/
    Shape();
    /********************************************//**
     * \brief The Shape constructor
     *
     * \param centerX double the X position of center coordinate
     * \param centerY double the Y position of center coordinate
     *
     ***********************************************/
    Shape(double centerX, double centerY);
    /********************************************//**
     * \brief the interface to calculate the Perimeter of such shape
     *
     * \return virtual double the virtual function interface
     *
     ***********************************************/
    virtual double calcPerimeter();
    /********************************************//**
     * \brief the interface to calculate the area of such shape
     *
     * \return virtual double
     *
     ***********************************************/
    virtual double calcArea();
    /********************************************//**
     * \brief get the perimeter value
     *
     * \return double perimeter
     *
     ***********************************************/
    double getPerimeter() const;
    /********************************************//**
     * \brief get the area of such shape
     *
     * \return double area value
     *
     ***********************************************/
    double getArea() const;
    /********************************************//**
     * \brief get the X position of center coordinate
     *
     * \return double the X position value
     *
     ***********************************************/
    double getCenterPositionX() const;
    /********************************************//**
     * \brief get the Y position of center coordinate
     *
     * \return double the Y position value
     *
     ***********************************************/
    double getCenterPositionY();
    /********************************************//**
     * \brief set the perimeter. because there is a calculate function to
     *        minimize the calculation progress, so the perimeter value has to be update
     * \param perimeterTmp double the perimeter value
     * \return void
     *
     ***********************************************/
    void setPerimeter(double perimeterTmp);
    /********************************************//**
     * \brief same reason to setPerimeter() to set area
     *
     * \param areaTmp double the value ready to assign to private area
     * \return void
     *
     ***********************************************/
    void setArea(double areaTmp);
    /********************************************//**
     * \brief set the center coordinate of x position
     *
     * \param centerPositionXTmp double
     * \return void
     *
     ***********************************************/
    void setCenterPositionX(double centerPositionXTmp);
    /********************************************//**
     * \brief set the y position of center coordinate
     *
     * \param centerPositionYTmp double
     * \return void
     *
     ***********************************************/
    void setCenterPositionY(double centerPositionYTmp);
};

#endif // _SHAPE_H_
