//
// Created by user on 21.03.2021.
//

#include <cmath>
#include "NodeSequence.h"
#include "Function.h"

void NodeSequence::addNode(const Node &node) {
    this->nodes.push_back(node);
}

const Node & NodeSequence::operator[](int index) const {
    return nodes[index];
}

Node & NodeSequence::operator[](int index) {
    return nodes[index];
}

size_t NodeSequence::getLength() const {
    return nodes.size();
}

NodeSequence::NodeSequence(double start_x, double end_x, size_t length, Type type,
                                   const Function &function) {
    if (type == UNIFORM)
        generateUniformNodes(start_x, end_x, length, function);
    else if (type == CHEBYSHEV)
        generateChebyshevNodes(start_x, end_x, length, function);

}

void NodeSequence::generateUniformNodes(double start_x, double end_x, size_t length,
                                        const Function &function) {
    double distance = end_x - start_x;
    double step = distance / double(length - 1);
    for (size_t i = 0; i < length; i++) {
        double x = start_x + i * step;
        double y = function(x);
        this->nodes.emplace_back(x, y);
    }
}

void NodeSequence::generateChebyshevNodes(double start_x, double end_x, size_t length,
                                          const Function &function) {
    for (size_t i = 0; i < length; i++) {
        double x = 0.5 * (end_x + start_x) + 0.5 * (end_x - start_x) * cos((2.0 * i + 1.0) / double(2 * length) * M_PI);
        double y = function(x);
        this->nodes.emplace_back(x, y);
    }
}
