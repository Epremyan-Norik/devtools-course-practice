// Copyright 2020 Epremyan Norik

#ifndef MODULES_AREA_CALCULATOR_3D_INCLUDE_AREA_CALCULATOR_3D_H_
#define MODULES_AREA_CALCULATOR_3D_INCLUDE_AREA_CALCULATOR_3D_H_
#include <string>
#include "cone.h"
#include "cylinder.h"
#include "cube.h"
template <class T>
class calculator {
 public:
	 calculator();
	 calculator(T* _figure);
	 ~calculator();
	 double result();
	 
 private:
	 T* figure;


};
#endif  // MODULES_AREA_CALCULATOR_3D_INCLUDE_AREA_CALCULATOR_3D_H_
