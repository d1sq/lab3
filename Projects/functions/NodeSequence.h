//
// Created by user on 21.03.2021.
//

#ifndef STUD_LAB_FIRST_NODESEQUENCE_H
#define STUD_LAB_FIRST_NODESEQUENCE_H

#include<vector>
#include "Node.h"
#include "Function.h"

class NodeSequence {
public:
    enum Type {
        UNIFORM,
        CHEBYSHEV
    };
public:
    NodeSequence()= default;
    NodeSequence(double start_x, double end_x, size_t length, Type type,
                 const Function & function);
    void addNode(const Node & node);
    const Node & operator[] (int index) const;
    Node & operator[] (int index);
    size_t getLength() const;
private:
    void generateUniformNodes(double start_x, double end_x, size_t length,
                              const Function & function);
    void generateChebyshevNodes(double start_x, double end_x, size_t length,
                                const Function & function);
private:
    std::vector<Node> nodes;
};

#endif //STUD_LAB_FIRST_NODESEQUENCE_H
