//
// Created by user on 21.03.2021.
//

#include "Node.h"


Node::Node(double x, double y){
    this->x = x;
    this->y = y;
}

double Node::getX() const {
    return x;
}

void Node::setX(double x) {
    this->x = x;
}

double Node::getY() const {
    return y;
}

void Node::setY(double y) {
    this->y = y;
}

Node::Node() {
    this->x = this->y = 0;
}
