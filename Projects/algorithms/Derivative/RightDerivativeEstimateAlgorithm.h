//
// Created by user on 23.03.2021.
//

#ifndef QT_FIRST_LAB_RIGHTDERIVATIVEESTIMATEALGORITHM_H
#define QT_FIRST_LAB_RIGHTDERIVATIVEESTIMATEALGORITHM_H


#include "DerivativeEstimateAlgorithm.h"

class RightDerivativeEstimateAlgorithm: public DerivativeEstimateAlgorithm {
public:
    RightDerivativeEstimateAlgorithm(const Function *function, double step);
    ~RightDerivativeEstimateAlgorithm() override = default;

    double estimate(double x) override;

};


#endif //QT_FIRST_LAB_RIGHTDERIVATIVEESTIMATEALGORITHM_H
