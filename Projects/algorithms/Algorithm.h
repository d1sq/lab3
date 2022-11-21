//
// Created by user on 23.03.2021.
//

#ifndef QT_FIRST_LAB_ALGORITHM_H
#define QT_FIRST_LAB_ALGORITHM_H


#include "../functions/Function.h"
#include <memory>

class Algorithm {
public:
    explicit Algorithm(const Function * function);
    virtual ~Algorithm() = default;

    const Function *getFunction() const;
    void setFunction(const Function *function);

protected:
   const Function * function;
};


#endif //QT_FIRST_LAB_ALGORITHM_H
