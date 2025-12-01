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

    cout << "Linked List Contenet:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::node* N1 = MydblLinkedList.find(2);

    if (N1 != NULL)
        cout << "\n\nNode with value 2 is Found :-)\n";
    else
        cout << "\n\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\n\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::node* N2 = MydblLinkedList.find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\n\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\n\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\n\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();

    system("pause>0");
    return 0;
}