//
// Created by user on 21.03.2021.
//

#ifndef STUD_LAB_FIRST_NODE_H
#define STUD_LAB_FIRST_NODE_H


class Node {
public:
    Node();
    Node(double x, double y);
    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);
private:
    double x;
    double y;
};

#endif //STUD_LAB_FIRST_NODE_H
