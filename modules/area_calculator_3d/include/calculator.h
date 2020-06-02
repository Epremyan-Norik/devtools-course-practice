// Copyright 2020 Epremyan Norik
#ifndef MODULES_AREA_CALCULATOR_3D_INCLUDE_CALCULATOR_H_
#define MODULES_AREA_CALCULATOR_3D_INCLUDE_CALCULATOR_H_
template <class T>
class calculator {
 public:
    calculator();
    explicit calculator(T* _figure);
    ~calculator();
    double result();
 private:
    T* figure;
};
#endif  // MODULES_AREA_CALCULATOR_3D_INCLUDE_CALCULATOR_H_
