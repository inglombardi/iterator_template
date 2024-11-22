#include <iostream>
#include "stack.h"
#include "node.h"
#include "iterator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    // TODO code application logic here
    stack *p=new stack();
    p->aggiungi(5);
    p->aggiungi(6);
    p->aggiungi(1);
    iterator *j= p->GetIterator();
    int b;
    while(j->hasNext()){
        b=j->next();
        std::cout<<b<<"\n";
    }
    return 0;
}