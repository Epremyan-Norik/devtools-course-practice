// Copyright 2020 Epremyan Norik
#include "include/cylinder.h"
#include <string>
#include <exception>

Cylinder::Cylinder() {
    this->figuretype = "cylinder";
    this->Height = 1;
    this->Radius = 1;
}
Cylinder::Cylinder(double _height, double _radius) {
    this->figuretype = "cylinder";
    this->SetHeight(_height);
    this->SetRadius(_radius);
}
std::string Cylinder::GetFigureType() {
    return this->figuretype;
}
double Cylinder::GetRadius() {
    return this->Radius;
}
double Cylinder::GetHeight() {
    return this->Height;
}
bool Cylinder::SetRadius(double _radius) {
    if (_radius <= 0) throw ("Radius should be positive");
    this->Radius = _radius;
    return false;
}
bool Cylinder::SetHeight(double _height) {
    if (_height <= 0) throw ("Height should be positive");
    this->Radius = _height;
    return false;
}
