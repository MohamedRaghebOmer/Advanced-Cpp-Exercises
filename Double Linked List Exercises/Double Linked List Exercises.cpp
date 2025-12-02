#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{

    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: ";
    MyQueue.print();

    cout << "\nQueue Size: " << MyQueue.size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    cout << "\n\nQueue after pop(): ";
    MyQueue.print();


    // Extinstion 1
    cout << "\nItem at [3] = " << MyQueue.GetItem(3) << endl; // prints: 30

    


    system("pause>0");
    return 0;
}