//
// Created by user on 28.03.2021.
//

#include <limits>
#include <cmath>
#include "DichotomyRootFinder.h"

DichotomyRootFinder::DichotomyRootFinder(const Function *function, double error, double a, double b)
    :IterableRootFinder(function, error)
{
    this->a = this->curr_a = a;
    this->b = this->curr_b = b;
}

double DichotomyRootFinder::nextIteration() {
    double x = (this->curr_a + this->curr_b) / 2;
    double f_x = (*this->function)(x);
    if (fabs(f_x) < std::numeric_limits<double>::epsilon())
        return x;

    double f_a = (*this->function)(curr_a);
    if (fabs(f_a) < std::numeric_limits<double>::epsilon())
        return this->curr_a;

    double f_b = (*this->function)(curr_b);
    if (fabs(f_b) < std::numeric_limits<double>::epsilon())
        return this->curr_b;

    if (f_x * f_a < 0){
        this->curr_b = x;
    } else{
        this->curr_a = x;
    }
    return x;
}

void DichotomyRootFinder::restart() {
    IterableRootFinder::restart();
    this->curr_a = a;
    this->curr_b = b;
}

