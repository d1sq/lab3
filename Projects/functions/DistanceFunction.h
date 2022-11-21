//
// Created by user on 21.03.2021.
//

#ifndef STUD_LAB_FIRST_DISTANCEFUNCTION_H
#define STUD_LAB_FIRST_DISTANCEFUNCTION_H


#include "Function.h"
#include <math.h>

class DistanceFunction : public Function{
public:
    DistanceFunction(const Function & first_function, const Function & second_function);
    double operator () (double arg) const override;


private:
    const Function * first_function;
    const Function * second_function;
};


#endif //STUD_LAB_FIRST_DISTANCEFUNCTION_H
