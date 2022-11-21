//
// Created by user on 21.03.2021.
//

#include "Pow.h"

Pow::Pow() {
    this->order = 1;
}

Pow::Pow(double order) {
    this->order = order;
}

double Pow::operator()(double arg) const {
    return pow(arg, this->order);
}

double Pow::derivative(double arg) const {
    return this->order * pow(arg, this->order - 1);
}

double Pow::second_derivative(double arg) const {
    return order * (order - 1) * pow(arg, order - 2);
}

double Pow::antiDerivativeFunction(double x) const {
    return pow(x, order + 1) / (order + 1);
}

