//
// Created by user on 23.03.2021.
//

#include "RightDerivativeEstimateAlgorithm.h"

RightDerivativeEstimateAlgorithm::RightDerivativeEstimateAlgorithm(const Function *function, double step)
        : DerivativeEstimateAlgorithm(function, step) {
}

double RightDerivativeEstimateAlgorithm::estimate(double x) {
   return (function->operator() (x + step) - function->operator () (x)) / step;
}