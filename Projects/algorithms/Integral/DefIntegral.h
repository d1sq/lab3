//
// Created by user on 27.03.2021.
//

#ifndef QT_FIRST_LAB_DEFINTEGRAL_H
#define QT_FIRST_LAB_DEFINTEGRAL_H


#include "../Algorithm.h"
#include <cmath>

class DefIntegral: public Algorithm {
public:
    struct Result{
        double value;
        double error;
    };
public:
    DefIntegral(const Function * function, int N);
    Result estimate(double a, double b) const;
private:
    virtual double estimateValue(double a, double b) const = 0;
public:
    int N;
};


#endif //QT_FIRST_LAB_DEFINTEGRAL_H
