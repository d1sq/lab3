//
// Created by user on 21.03.2021.
//

#include "DistanceFunction.h"

DistanceFunction::DistanceFunction(const Function &first_function, const Function &second_function)
{
    this->first_function = &first_function;
    this->second_function = &second_function;
}

double DistanceFunction::operator()(double x) const {
    return fabs((*this->first_function)(x) - (*this->second_function)(x));
}
