#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    clsDblLinkedList<int> ::node* n = MydblLinkedList.GetNode(2);
    cout << "node in 2 = " << n->value << endl; // prints: 3
                    
    system("pause>0");
    return 0;
}