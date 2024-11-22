//
// Created by user on 13/06/19.
//

#ifndef ITERATORE_NODE_H
#define ITERATORE_NODE_H


class node {

private:

    int v;
    node *next;

public:

    int getV();
    void setV(int val);
    node* getNext();
    void setNext(node *next);

};


#endif //ITERATORE_NODE_H
