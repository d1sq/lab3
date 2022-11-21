//
// Created by user on 28.03.2021.
//

#ifndef QT_FIRST_LAB_DICHOTOMYROOTFINDER_H
#define QT_FIRST_LAB_DICHOTOMYROOTFINDER_H


#include "IterableRootFinder.h"

class DichotomyRootFinder : public IterableRootFinder{
public:
    DichotomyRootFinder(const Function *function, double error, double a, double b);
protected:
    double nextIteration() override;
    void restart() override;
private:
    double a;
    double b;
    double curr_a;
    double curr_b;
};


#endif //QT_FIRST_LAB_DICHOTOMYROOTFINDER_H
