//
// Created by user on 27.03.2021.
//

#ifndef QT_FIRST_LAB_NOTIMPLEMENTED_H
#define QT_FIRST_LAB_NOTIMPLEMENTED_H

#include<stdexcept>

class NotImplemented : public std::logic_error{
public:
    NotImplemented();
};


#endif //QT_FIRST_LAB_NOTIMPLEMENTED_H
