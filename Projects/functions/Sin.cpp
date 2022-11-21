//
// Created by user on 21.03.2021.
//

#include "Sin.h"

double Sin::operator()(double arg) const {
    return sin(arg);
}

double Sin::derivative(double arg) const {
    return cos(arg);
}

double Sin::second_derivative(double arg) const {
    return -sin(arg);
}

double Sin::antiDerivativeFunction(double x) const {
    return -cos(x);
}