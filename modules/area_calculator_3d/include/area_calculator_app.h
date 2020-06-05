// Copyright 2020 Epremyan Norik
#ifndef MODULES_AREA_CALCULATOR_3D_INCLUDE_AREA_CALCULATOR_APP_H_
#define MODULES_AREA_CALCULATOR_3D_INCLUDE_AREA_CALCULATOR_APP_H_
#include <string>
#include <iostream>
#include <vector>
#include <include/calculator.h>

class area_calculator_app {
 public:
    std::string operator()(const int argc, char** argv);
	bool CanCreateFigure(const int argc, char** argv);
	figure* CreateFigure(char** argv);
};

#endif  // MODULES_AREA_CALCULATOR_3D_INCLUDE_AREA_CALCULATOR_APP_H_
