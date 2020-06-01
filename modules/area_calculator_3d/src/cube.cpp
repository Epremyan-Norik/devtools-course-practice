// Copyright 2020 Epremyan Norik
#include "include/cube.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <string>
#include <sstream>

cube::cube() {
	figuretype = "cube";
	edge = 0;
}
cube::cube(double _edge) {
	figuretype = "cube";
	if (_edge < 0) throw std::exception("Cant Create with negative Value");
	edge = _edge;
}
std::string cube::GetFigureType() {
	return this->figuretype;
}
double cube::GetEdge() {
	return this->edge;
}
bool cube::setEdge(double _edge) {
	bool result = true;
	if (_edge < 0) throw std::exception("Cant Set negative Value");
	this->edge = _edge;
	result = 0;
	return result;
}