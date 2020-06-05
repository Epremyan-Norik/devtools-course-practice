// Copyright 2020 Epremyan Norik
#include "include/area_calculator_app.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <vector>

std::string area_calculator_app::operator()(const int argc, char** argv) {
	return "y";
}
bool area_calculator_app::CanCreateFigure(const int argc, char** argv) {
    if (argc < 3) return false; // Not enough arguments
    if (argv[1] == "cube") {
        return true;
    }
    else if (argv[1] == "cylinder") {
        if (argc < 4) return false; // Not enough arguments
        return true;
    }
    else if (argv[1] == "cone") {
        if (argc < 4) return false; // Not enough arguments
        return true;
    }
    else return false; // lib don't know this figure
}
figure* area_calculator_app::CreateFigure(char** argv) {
	figure** tmp = new figure*;
	return *tmp;
}