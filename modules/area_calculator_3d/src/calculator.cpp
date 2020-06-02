// Copyright 2020 Epremyan Norik
#include "include/calculator.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>



template <class T>
calculator<T>::calculator(T* _figure) {
    figure = _figure;
}
template <class T>
calculator<T>::calculator() {
    figure = nullptr;
}
template <class T>
calculator<T>::~calculator() {
    delete[] figure;
}
template <class T>
double calculator<T>::result() {
    double _res = 0;
    switch (figure.GetFigureType()) {
    case "cube": {
        _res = 6 * figure.GetEdge()*figure.GetEdge();
        break;
    }
    case "cone": {
		double rad = figure.GetRadius();
		double Hei = figure.GetHeight();
        double forming = sqrt(exp2(rad) + exp2(Hei));
        _res = M_PI * rad * (rad+forming);
        break;
    }
    case "cylinder": {
		double rad = figure.GetRadius();
		double Hei = figure.GetHeight();
        _res = 2 * M_PI * rad * (rad + Hei);
        break;
    }
    default:
        break;
    }
    return _res;
}
