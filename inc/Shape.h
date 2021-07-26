#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected: //acess granted to chidren
    double Height;
    double Width;

private: //no access

public: //access to everyone
    static int NumOfShapes; //static makes value the same for all instances
    Shape(double lenght);
    Shape(double height, double width);
    Shape();

    virtual ~Shape();
    void SetHeight(double height);
    double GetHeight();
    void SetWidth(double width);
    double GetWidth();
    static int GetNumOfShapes();
    virtual double Area(); //virtual as each instance will override / have its own area function
};


#endif