//
// Created by user on 23.03.2021.
//

#include "SecondDerivativeAlgorithm.h"

SecondDerivativeAlgorithm::SecondDerivativeAlgorithm(const Function *function, double step)
        : DerivativeEstimateAlgorithm(function, step) {

}

double SecondDerivativeAlgorithm::estimate(double x) {
    return (this->function->operator()(x + step) + this->function->operator()(x - step) -
        2 * this->function->operator()(x)) / (step * step);
}

double SecondDerivativeAlgorithm::estimateError(double x) {
    return fabs(this->estimate(x) - this->function->second_derivative(x));
}
