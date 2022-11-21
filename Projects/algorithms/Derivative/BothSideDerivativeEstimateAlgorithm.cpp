//
// Created by user on 23.03.2021.
//

#include "BothSideDerivativeEstimateAlgorithm.h"

BothSideDerivativeEstimateAlgorithm::BothSideDerivativeEstimateAlgorithm(const Function *function, double step)
        : DerivativeEstimateAlgorithm(function, step) {
}

double BothSideDerivativeEstimateAlgorithm::estimate(double x) {
    return ((*function)(x + step) - (*function)(x - step)) / (2 * step);
}