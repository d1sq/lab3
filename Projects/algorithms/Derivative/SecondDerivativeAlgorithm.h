//
// Created by user on 23.03.2021.
//

#ifndef QT_FIRST_LAB_SECONDDERIVATIVEALGORITHM_H
#define QT_FIRST_LAB_SECONDDERIVATIVEALGORITHM_H


#include "DerivativeEstimateAlgorithm.h"

class SecondDerivativeAlgorithm: public DerivativeEstimateAlgorithm {
public:
    SecondDerivativeAlgorithm(const Function *function, double step);
    ~SecondDerivativeAlgorithm() override = default;

    double estimateError(double x) override;
    double estimate(double x) override;
};


#endif //QT_FIRST_LAB_SECONDDERIVATIVEALGORITHM_H
