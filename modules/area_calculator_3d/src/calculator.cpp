// Copyright 2020 Epremyan Norik
#include "include/calculator.h"
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>


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
	double _res=0;
	switch (figure.GetFigureType())
	{
	case "cube": {
		_res = 6 * figure.GetEdge()*figure.GetEdge();
		break;
	}
	case "cone": {
		double forming = sqrt(exp2(figure.GetRadius()) + exp2(figure.GetHeight()));
		_res = M_PI * figure.GetRadius() * (figure.GetRadius()+forming);
		break;
	}
	case "cylinder": {
		_res = 2 * M_PI * figure.GetRadius() * (figure.GetRadius() + figure.GetHeight());
		break;
	}
	default:
		break;
	}
	return _res;
}
