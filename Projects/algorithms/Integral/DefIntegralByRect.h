//
// Created by user on 27.03.2021.
//

#ifndef QT_FIRST_LAB_DEFINTEGRALBYRECT_H
#define QT_FIRST_LAB_DEFINTEGRALBYRECT_H


#include "DefIntegral.h"

class DefIntegralByRect : public DefIntegral{
public:
    DefIntegralByRect(const Function *function, int N);
    double estimateValue(double a, double b) const override;

};


#endif //QT_FIRST_LAB_DEFINTEGRALBYRECT_H
