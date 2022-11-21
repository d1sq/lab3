//
// Created by user on 21.03.2021.
//

#ifndef STUD_LAB_FIRST_FUNCTION_H
#define STUD_LAB_FIRST_FUNCTION_H

#include <vector>
#include <memory>

class Function {
public:
    virtual double operator () (double x) const = 0;
    virtual double derivative(double arg) const;
    virtual double second_derivative(double arg) const;
    virtual double antiDerivativeFunction(double x) const;
    virtual ~Function()= default;
};

#endif //STUD_LAB_FIRST_FUNCTION_H
