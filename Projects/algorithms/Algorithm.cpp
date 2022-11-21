//
// Created by user on 23.03.2021.
//

#include "Algorithm.h"

Algorithm::Algorithm(const Function *function) {
    this->function = function;
}

const Function *Algorithm::getFunction() const {
    return function;
}

void Algorithm::setFunction(const Function *function) {
    Algorithm::function = function;
}
