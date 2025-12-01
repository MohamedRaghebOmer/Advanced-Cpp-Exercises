#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{

    clsDblLinkedList <int> list;

    list.InsertAtBeginning(5);
    list.InsertAtBeginning(4);
    list.InsertAtBeginning(3);
    list.InsertAtBeginning(2);
    list.InsertAtBeginning(1);

    list.PrintList();
    if (list.UpdateItem(2, 300))
        cout << "\nItem updated successfly.\n\n";
    else
        cout << "\nItem not found, or invalid value to update.\n\n";
    
    list.PrintList();
    
    system("pause>0");
    return 0;
}