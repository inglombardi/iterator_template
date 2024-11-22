//
// Created by user on 13/06/19.
//

#include "iterator.h"
#include "node.h"


iterator::iterator(node *n) {
    t=n;
}

int iterator::next() {
    if(t== nullptr)
        return 0;
    int a=t->getV();
    t=t->getNext();
    return a;
}

bool iterator::hasNext() {
    return (t!=0);
}
