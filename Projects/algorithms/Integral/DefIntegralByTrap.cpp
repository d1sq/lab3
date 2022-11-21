//
// Created by user on 27.03.2021.
//

#include "DefIntegralByTrap.h"

DefIntegralByTrap::DefIntegralByTrap(const Function *function, int N) : DefIntegral(function, N) {
}

double DefIntegralByTrap::estimateValue(double a, double b) const {
    auto int_value = 0.0;
    auto delta = (b - a) / N;
    for(int i = 0; i < N - 1; i++){
        auto x = a + i * delta;
        int_value += (*this->function)(x) + (*this->function)(x + delta);
    }
    return int_value * delta / 2;
}
