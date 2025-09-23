#include <iostream>
#include "listheader.hpp"
using namespace std;

int main() {
    struct Node *START;
    START = NULL;

    InsEnd(&START, 'A');
    InsEnd(&START, 'B');
    InsEnd(&START, 'C');
    InsEnd(&START, 'D');
    InsEnd(&START, 'E');
    InsEnd(&START, 'F');
    InsEnd(&START, 'G');
    InsEnd(&START, 'H');
    InsEnd(&START, 'I');
    InsEnd(&START, 'J');
    Traverse(START);

    cout<<countnode(&START)<<endl;

    middleelement(START);

    midelement(START);

    reverse(&START);

    Traverse(START);
    Node *p = START;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->Next;
    }
    deletenode(&START, 'C');
    cout<<endl;
    Traverse(START);
    deleteafter(&START);
    Traverse(START);
    deleteafter(&START->Next);
    Traverse(START);
    deleteend(&START);
    Traverse(START);
    deletebeg(&START);
    Traverse(START);
    ordered_instertion(&START, 'E');
    Traverse(START);


    return 0;
}