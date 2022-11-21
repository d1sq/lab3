//
// Created by user on 28.03.2021.
//

#include "NewtonRootFinder.h"

NewtonRootFinder::NewtonRootFinder(const Function *function, double error, double x_0)
    : IterableRootFinder(function, error) {
    this->x_0 = this->curr_x = x_0;
}

double NewtonRootFinder::nextIteration() {
    curr_x = curr_x - (*this->function)(curr_x) / (this->function->derivative(curr_x));
    return curr_x;
}

void NewtonRootFinder::restart() {
    IterableRootFinder::restart();
    this->curr_x = this->x_0;
}
