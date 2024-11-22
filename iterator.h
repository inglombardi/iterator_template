//
// Created by user on 13/06/19.
//
#include "node.h"

#ifndef ITERATORE_ITERATOR_H
#define ITERATORE_ITERATOR_H


class iterator {

    node *t;

public:

    iterator(node *n);
    bool hasNext();
    int next();

};


#endif //ITERATORE_ITERATOR_H
