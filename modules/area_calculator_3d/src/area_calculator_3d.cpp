// Copyright 2020 Epremyan Norik
#include "include/area_calculator_3d.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <string>
#include <sstream>

area_calculator_3d::area_calculator_3d() {
  figure="none";
}
std::string area_calculator_3d::GetFigureType(){
  return figure;
}
