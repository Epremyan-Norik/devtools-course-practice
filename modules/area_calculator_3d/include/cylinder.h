// Copyright 2020 Epremyan Norik

#ifndef MODULES_AREA_CALCULATOR_3D_INCLUDE_CYLINDER_H_
#define MODULES_AREA_CALCULATOR_3D_INCLUDE_CYLINDER_H_
#include <string>

class Cylinder {
 public:
	 Cylinder();
	 Cylinder(double _height, double _radius);
	 std::string GetFigureType();
	 double GetRadius();
	 double GetHeight();
	 bool SetRadius(double _radius);
	 bool SetHeight(double _height);

 private:
	 double Radius;
	 double Height;
	 std::string figuretype;
};
#endif  // MODULES_AREA_CALCULATOR_3D_INCLUDE_AREA_CALCULATOR_3D_H_
