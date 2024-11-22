//
// Created by user on 13/06/19.
//

#include "stack.h"
#include "node.h"
#include "iterator.h"

void stack::aggiungi(int v) {
    //creo un nuovo nodo t;
    node *t=new node();
    // attribuisco al campo v di t il valore v passato come parametro
    t->setV(v);
    //attribuisco al campo next di t lo stesso valore di testa t.next diventa un alias di testa
    t->setNext(testa);
    //attribuisco a testa lo stasso valore di t. ora testa punta al nuovo elemento
    //il cui campo next punta alla lista a cui puntava testa
    testa=t;//aliasing

}

iterator* stack::GetIterator() {
    iterator *i= new iterator(testa);
    return i;
}


int stack::primo() {
    //rende il valore v di testa
    return testa->getV();
}


void stack::togli() {
    // faccio puntare testa al nodo next: elimino il primo nodo della lista
    testa=testa->getNext();
}

bool stack::vuoto() {
    //pila vuota corrisponde a testa uguale a null
    return testa==nullptr;
}
