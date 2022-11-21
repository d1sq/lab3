//
// Created by user on 23.03.2021.
//

#include "DerivativeEstimateAlgorithm.h"

DerivativeEstimateAlgorithm::DerivativeEstimateAlgorithm(const Function *function, double step)
: Algorithm(function){
    this->step = step;
}

double DerivativeEstimateAlgorithm::estimateError(double x) {
    return fabs(function->derivative(x) - this->estimate(x));
}
