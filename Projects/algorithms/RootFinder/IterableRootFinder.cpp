//
// Created by user on 28.03.2021.
//

#include <cmath>
#include "IterableRootFinder.h"

IterableRootFinder::IterableRootFinder(const Function *function, double error) : Algorithm(function) {
    this->error = error;
}

double IterableRootFinder::estimateRoot() {
    this->restart();
    double prev_appr, next_appr;
    next_appr = this->nextIteration();
    this->approximations.push_back(next_appr);
    do {
        prev_appr = next_appr;
        next_appr = this->nextIteration();
        this->approximations.push_back(next_appr);
    }while(fabs( next_appr - prev_appr) > error);
    return next_appr;
}

const std::vector<double> & IterableRootFinder::getApproximations() const {
    return this->approximations;
}

void IterableRootFinder::restart() {
    this->approximations.clear();
}
