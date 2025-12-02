//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include "clsMyQueueArr.h"

using namespace std;

int main()
{

    clsMyQueueArr <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.print();

    cout << "\nQueue Size: " << MyQueue.size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueue.print();


    cout << "\n\nItem(2) : " << MyQueue.GetItem(2);


    MyQueue.reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.print();


    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.print();


    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.print();



    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.print();


    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.print();


    MyQueue.clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.print();

    system("pause>0");
    return 0;
}