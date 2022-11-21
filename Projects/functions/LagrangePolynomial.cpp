//
// Created by user on 21.03.2021.
//

#include "LagrangePolynomial.h"

LagrangePolynomial::LagrangePolynomial(const NodeSequence &nodes) {
    this->nodes = nodes;
}

double LagrangePolynomial::operator()(double x) const {
    auto N = this->nodes.getLength();
    double res_value = 0.0;
    for (auto i = 0; i < N; i++) {
        double prod = 1.0;
        for (auto j = 0; j < N; j++) {
            if (i == j)
                continue;
            prod *= (x - this->nodes[j].getX()) / (this->nodes[i].getX() - this->nodes[j].getX());
        }
        res_value += this->nodes[i].getY() * prod;
    }
    return res_value;
}
