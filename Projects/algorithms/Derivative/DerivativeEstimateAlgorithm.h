//
// Created by user on 23.03.2021.
//

#ifndef QT_FIRST_LAB_DERIVATIVEESTIMATEALGORITHM_H
#define QT_FIRST_LAB_DERIVATIVEESTIMATEALGORITHM_H


#include "../Algorithm.h"
#include <cmath>

class DerivativeEstimateAlgorithm : public Algorithm {
public:
    DerivativeEstimateAlgorithm(const Function * function, double step);
    ~DerivativeEstimateAlgorithm() override = default;
    virtual double estimate(double x) = 0;
    virtual double estimateError(double x);
protected:
    double step;
};


#endif //QT_FIRST_LAB_DERIVATIVEESTIMATEALGORITHM_H
