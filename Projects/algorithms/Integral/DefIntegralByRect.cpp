//
// Created by user on 27.03.2021.
//

#include "DefIntegralByRect.h"

DefIntegralByRect::DefIntegralByRect(const Function *function, int N) : DefIntegral(function, N) {
}

double DefIntegralByRect::estimateValue(double a, double b) const{
    auto int_value = 0.0;
    auto delta = (b - a) / N;
    for(int i = 0; i < N - 1; i++){
        auto x = a + i * delta;
        int_value += (*this->function)(x);
    }
    return int_value * delta;
}
