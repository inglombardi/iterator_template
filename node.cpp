//
// Created by user on 13/06/19.
//

#include "node.h"


int node::getV() {
    return v;
}



void node::setV(int val) {
    this->v = val;
}


void node::setNext(node* next) {
    this->next = next;
}



node* node::getNext() {
    return this->next;
}