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

    cout << "before:" << endl;
    MydblLinkedList.PrintList();
    MydblLinkedList.reverse();
    cout << "after:" << endl;
    MydblLinkedList.PrintList();

    system("pause>0");
    return 0;
}