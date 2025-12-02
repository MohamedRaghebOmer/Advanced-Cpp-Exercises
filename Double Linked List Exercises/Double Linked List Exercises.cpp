#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{

    clsMyQueue <int> qu;

    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);


    cout << "\nQueue: ";
    qu.print();

    cout << "\nQueue Size: " << qu.size();
    cout << "\nQueue Front: " << qu.front();
    cout << "\nQueue Back: " << qu.back();

    qu.pop();
    cout << "\n\nQueue after pop(): ";
    qu.print();


    // Extinstion 1
    cout << "\nItem at [3] = " << qu.GetItem(3) << endl; // prints: 50


    // Extinstion 2
    if(qu.reverse())
    {
        cout << "\nQueue after reversing: ";
        qu.print();
    }
    else
    {
        cout << "\nreversing failed" << endl;
        qu.print();
    }


    // Extinstion 3
    if(qu.UpdateItem(2, 200))
    {
        cout << "\nMy qu after update item at [2] to 200 : ";
        qu.print();
    }
    else
    {
        cout << "\nUpdate falid, ";
        qu.print();
    }

    // Extinstion 4
    if (qu.InsertAfter(2, 444))
    {
        cout << "\nqu after inserting 444 after node 2: ";
        qu.print();
    }
    else
    {
        cout << "\ninserting failed, ";
        qu.print();
    }

    // Extinstion 5
    qu.InsertAtFront(1000);
    cout << "\nqu after inserting at front 1000 in the front: ";
    qu.print();

    // Extinstion 6
    qu.InsertAtBack(2500);
    cout << "\nqu after inserting at back 2500 in the front: ";
    qu.print();

    system("pause>0");
    return 0;
}