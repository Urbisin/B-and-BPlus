#include <iostream>
#include "BTreePlus.h"
using namespace std;

int main() {
    BTreePlus t(3);
    t.insert(10);
    t.insert(20);
    t.insert(5);
    t.insert(6);
    t.insert(12);
    t.insert(30);
    t.insert(7);
    t.insert(17);

    cout << "Traversal of the constructed B+ tree is ";
    t.traverse();

    t.remove(6);
    cout << "Traversal of the B+ tree after removing 6 ";
    t.traverse();

    t.remove(13);
    cout << "Traversal of the B+ tree after removing 13 ";
    t.traverse();

    t.remove(7);
    cout << "Traversal of the B+ tree after removing 7 ";
    t.traverse();

    t.remove(4);
    cout << "Traversal of the B+ tree after removing 4 ";
    t.traverse();

    t.remove(2);
    cout << "Traversal of the B+ tree after removing 2 ";
    t.traverse();

    t.remove(16);
    cout << "Traversal of the B+ tree after removing 16 ";
    t.traverse();

    return 0;
}

