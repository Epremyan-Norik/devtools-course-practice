// Copyright 2020 Epremyan Norik
#include "include/cube.h"
#include <string>
#include <exception>

cube::cube() {
    figuretype = "cube";
    edge = 0;
}
cube::cube(double _edge) {
    figuretype = "cube";
    if (_edge < 0) throw ("Cant Create with negative Value");
    edge = _edge;
}
std::string cube::GetFigureType() {
    return this->figuretype;
}
double cube::GetEdge() {
    return this->edge;
}
bool cube::setEdge(double _edge) {
    if (_edge < 0) throw ("Cant Set negative Value");
    this->edge = _edge;
	return false;
}