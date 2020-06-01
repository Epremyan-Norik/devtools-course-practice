// Copyright 2020 Epremyan Norik
#ifndef MODULES_AREA_CALCULATOR_3D_INCLUDE_CUBE__H_
#define MODULES_AREA_CALCULATOR_3D_INCLUDE_CUBE__H_
#include <string>
class cube {
 public:
    cube();
    explicit cube(double _edge);
    std::string GetFigureType();
    double GetEdge();
    bool setEdge(double);
 private:
    std::string figuretype;
    double edge;
};
#endif // MODULES_AREA_CALCULATOR_3D_INCLUDE_CUBE_H_
