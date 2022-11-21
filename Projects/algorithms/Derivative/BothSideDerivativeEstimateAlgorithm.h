//
// Created by user on 23.03.2021.
//

#ifndef QT_FIRST_LAB_BOTHSIDEDERIVATIVEESTIMATEALGORITHM_H
#define QT_FIRST_LAB_BOTHSIDEDERIVATIVEESTIMATEALGORITHM_H


#include "DerivativeEstimateAlgorithm.h"

class BothSideDerivativeEstimateAlgorithm: public DerivativeEstimateAlgorithm {
public:
    BothSideDerivativeEstimateAlgorithm(const Function * function, double step);
    ~BothSideDerivativeEstimateAlgorithm() override = default;

    double estimate(double x) override;

};


#endif //QT_FIRST_LAB_BOTHSIDEDERIVATIVEESTIMATEALGORITHM_H
