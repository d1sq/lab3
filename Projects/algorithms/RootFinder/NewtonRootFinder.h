//
// Created by user on 28.03.2021.
//

#ifndef QT_FIRST_LAB_NEWTONROOTFINDER_H
#define QT_FIRST_LAB_NEWTONROOTFINDER_H


#include "IterableRootFinder.h"

class NewtonRootFinder : public IterableRootFinder{
public:
    NewtonRootFinder(const Function *function, double error, double x_0);

protected:
    double nextIteration() override;
    void restart() override;

private:
    double x_0;
    double curr_x = 0;
};


#endif //QT_FIRST_LAB_NEWTONROOTFINDER_H
