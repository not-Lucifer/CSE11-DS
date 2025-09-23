#include<iostream>
#include "listheader.hpp"
using namespace std;
Node* merge(Node *START1, Node *START2) {
    Node *p1 = START1;
    Node *p2 = START2;
    Node *START3 = NULL;
    while (p1 != NULL && p2 != NULL) {
        if (p1->info < p2->info) {
            InsEnd(&START3, p1->info);
            p1 = p1->Next;
        } else {
            InsEnd(&START3, p2->info);
            p2 = p2->Next;
        }
    }
    while (p1 != NULL) {
        InsEnd(&START3, p1->info);
        p1 = p1->Next;
    }
    while (p2 != NULL) {
        InsEnd(&START3, p2->info);
        p2 = p2->Next;
    }
    return START3;
}
int main() {
    struct Node *START1;
    struct Node *START2;
    struct Node *START3;
    START1 = NULL;
    START2 = NULL;
    START3 = NULL;

    InsEnd(&START1, 'A');
    InsEnd(&START1, 'C');
    InsEnd(&START1, 'E');
    InsEnd(&START1, 'G');
    InsEnd(&START1, 'I');
    InsEnd(&START1, 'K');
    InsEnd(&START1, 'M');
    InsEnd(&START1, 'O');
    InsEnd(&START1, 'Q');
    InsEnd(&START1, 'S');
    cout << "First Linked List: ";
    Traverse(START1);

    InsEnd(&START2, 'B');
    InsEnd(&START2, 'D');
    InsEnd(&START2, 'F');
    InsEnd(&START2, 'H');
    InsEnd(&START2, 'J');
    InsEnd(&START2, 'L');
    InsEnd(&START2, 'N');
    InsEnd(&START2, 'P');
    InsEnd(&START2, 'R');
    InsEnd(&START2, 'T');
    cout << "Second Linked List: ";
    Traverse(START2);

    START3 = merge(START1, START2);
    cout << "Merged Linked List: ";
    Traverse(START3);

    return 0;
}