// Copyright 2020 Epremyan Norik
#include "cube.h"
#include <string>
#include <exception>

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