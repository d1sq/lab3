//
// Created by user on 21.03.2021.
//

#ifndef STUD_LAB_FIRST_POW_H
#define STUD_LAB_FIRST_POW_H


#include "Function.h"
#include <cmath>

class Pow : public Function{
public:
    Pow();
    explicit Pow(double order);
    double operator () (double x) const override;
    double derivative(double y) const override;
    double second_derivative(double arg) const override;
    double antiDerivativeFunction(double x) const override;

private:
    double order;
};


#endif //STUD_LAB_FIRST_POW_H
