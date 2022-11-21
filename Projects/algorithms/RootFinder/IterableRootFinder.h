//
// Created by user on 28.03.2021.
//

#ifndef QT_FIRST_LAB_ITERABLEROOTFINDER_H
#define QT_FIRST_LAB_ITERABLEROOTFINDER_H


#include "../Algorithm.h"

class IterableRootFinder : public Algorithm{
public:
    explicit IterableRootFinder(const Function * function, double error);
    double estimateRoot();
    const std::vector<double> &getApproximations() const;
protected:
    virtual double nextIteration() = 0;
    virtual void restart();
protected:
    double error;
    std::vector<double> approximations;
};


#endif //QT_FIRST_LAB_ITERABLEROOTFINDER_H
