// Copyright 2020 Epremyan Norik
#include "cone.h"
#include <string>
#include <exception>

cone::cone() {
    figuretype = "cone";
    Radius = 1;
    Height = 1;
}
std::string cone::GetFigureType() {
    return this->figuretype;
}
 double cone::GetHeight() {
    return this->Height;
  }
 double cone::GetRadius() {
    return this->Radius;
 }
 bool cone::SetHeight(double _height) {
    if (_height <= 0) throw std::exception("Height should be positive");
    this->Height = _height;
    return true;
 }
 bool cone::SetRadius(double _radius) {
    if (_radius <= 0) throw std::exception("Radius should be positive");
    this->Height = _radius;
    return true;
 }
 cone::cone(double _height, double _radius){
    this->figuretype = "cone";
    this->SetHeight(_height);
    this->SetRadius(_radius);
 }
