//
// Created by user on 27.03.2021.
//

#ifndef QT_FIRST_LAB_DEFINTEGRALBYTRAP_H
#define QT_FIRST_LAB_DEFINTEGRALBYTRAP_H


#include "DefIntegral.h"

class DefIntegralByTrap : public DefIntegral{
public:
    DefIntegralByTrap(const Function *function, int N);
    double estimateValue(double a, double b) const override;
};


#endif //QT_FIRST_LAB_DEFINTEGRALBYTRAP_H
