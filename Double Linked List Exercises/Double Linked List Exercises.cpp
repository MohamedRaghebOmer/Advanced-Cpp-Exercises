#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(7);
    MydblLinkedList.InsertAtBeginning(6);
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "size = " << MydblLinkedList.size() << endl;
    MydblLinkedList.clear();
    cout << "size after clear = " << MydblLinkedList.size() << endl;

    system("pause>0");
    return 0;
}