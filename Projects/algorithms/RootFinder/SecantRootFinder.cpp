//
// Created by user on 28.03.2021.
//

#include "SecantRootFinder.h"

SecantRootFinder::SecantRootFinder(const Function *function, double error, double x_0, double x_1)
    :IterableRootFinder(function, error){
    this->x_0 = this->curr_x_0 = x_0;
    this->x_1 = this->cur_x_1 = x_1;
}

double SecantRootFinder::nextIteration() {

    double buffer = this->cur_x_1;

    double derivative = ((*this->function)(this->cur_x_1) - (*this->function)(this->curr_x_0)) /
            (this->cur_x_1 - this->curr_x_0);
    this->cur_x_1 = this->cur_x_1 - (*this->function)(this->cur_x_1) / derivative;

    this->curr_x_0 = buffer;

    return this->cur_x_1;
}

void SecantRootFinder::restart() {
    IterableRootFinder::restart();
    this->curr_x_0 = this->x_0;
    this->cur_x_1 = this->x_1;
}
