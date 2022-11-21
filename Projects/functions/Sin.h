//
// Created by user on 21.03.2021.
//

#ifndef STUD_LAB_FIRST_SIN_H
#define STUD_LAB_FIRST_SIN_H

#include "Function.h"
#include <cmath>
#include <memory>

class Sin : public Function{
public:
    double operator () (double arg) const override;
    double derivative(double arg) const override;
    double second_derivative(double arg) const override;
    double antiDerivativeFunction(double x) const override;

};


#endif //STUD_LAB_FIRST_SIN_H
