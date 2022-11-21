//
// Created by user on 21.03.2021.
//

#ifndef STUD_LAB_FIRST_LAGRANGEPOLYNOMIAL_H
#define STUD_LAB_FIRST_LAGRANGEPOLYNOMIAL_H

#include "Function.h"
#include "NodeSequence.h"

class LagrangePolynomial : public Function {
public:
    explicit LagrangePolynomial(const NodeSequence & nodes);
    double operator () (double arg) const override;

private:
    NodeSequence nodes;
};


#endif //STUD_LAB_FIRST_LAGRANGEPOLYNOMIAL_H
