// Copyright 2020 Epremyan Norik
#ifndef MODULES_AREA_CALCULATOR_3D_INCLUDE_CONE_H_
#define MODULES_AREA_CALCULATOR_3D_INCLUDE_CONE_H_
#include <string>
class cone {
 public:
    cone();
    cone(double _height, double _radius);
    std::string GetFigureType();
    double GetRadius();
    double GetHeight();
    bool SetRadius(double _radius);
    bool SetHeight(double _height);
 private:
    std::string figuretype;
    double Radius;
    double Height;
};
#endif  // MODULES_AREA_CALCULATOR_3D_INCLUDE_CONE_H_
