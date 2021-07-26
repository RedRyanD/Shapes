#include "Shape.h"


    Shape::Shape(double length){
        this->Height = length;  //this = refferencing the shape itsself
        this->Width = length;                  
    }

    Shape::Shape(double height, double width){
        this->Height = height;
        this->Width = width;          
    }

    Shape::~Shape() = default;


    void Shape::SetHeight(double height){
        this->Height = height;
    }

    double Shape::GetHeight(){return Height;}

    void Shape::SetWidth(double width){
        this->Width = width;
    }

    double Shape::GetWidth(){return Width;}

    int Shape::GetNumOfShapes(){return NumOfShapes;}
    
    double Shape::Area(){
        return Height*Width;
    } //polymorphism

    int Shape::NumOfShapes = 0;