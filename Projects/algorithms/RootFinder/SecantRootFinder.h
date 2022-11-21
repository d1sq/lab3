//
// Created by user on 28.03.2021.
//

#ifndef QT_FIRST_LAB_SECANTROOTFINDER_H
#define QT_FIRST_LAB_SECANTROOTFINDER_H


#include "../../functions/Function.h"
#include "IterableRootFinder.h"

class SecantRootFinder : public IterableRootFinder{
public:
    SecantRootFinder(const Function *function, double error, double x_0, double x_1);

protected:
    double nextIteration() override;
    void restart() override;

private:
    double x_0;
    double x_1;
    double curr_x_0;
    double cur_x_1;
};


#endif //QT_FIRST_LAB_SECANTROOTFINDER_H
