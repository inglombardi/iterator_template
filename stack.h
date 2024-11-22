//
// Created by user on 13/06/19.
//

#include "node.h"
#include "iterator.h"

#ifndef ITERATORE_STACK_H
#define ITERATORE_STACK_H


class stack {

private:
    node *testa;
        // Costruttore. Il nodo viene inizializzato a null che vuol dire pila vuota






public:


    stack(){
            testa= nullptr;
        };

    void aggiungi(int v);
    bool vuoto();
    void togli();
    int primo();
    iterator* GetIterator();


};


#endif //ITERATORE_STACK_H
