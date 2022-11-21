//
// Created by user on 27.03.2021.
//

#include "../Integral/DefIntegral.h"

DefIntegral::DefIntegral(const Function *function, int N): Algorithm(function) {
    this->N = N;
}

DefIntegral::Result DefIntegral::estimate(double a, double b) const {
    DefIntegral::Result result{};
    result.value = this->estimateValue(a, b);
    result.error = fabs(function->antiDerivativeFunction(b) - function->antiDerivativeFunction(a) - result.value);
    return result;
}
