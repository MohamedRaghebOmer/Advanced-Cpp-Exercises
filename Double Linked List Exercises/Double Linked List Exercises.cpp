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
    cout << "\nItem at [3] = " << qu.GetItem(3) << endl; // prints: 30

    // Extinstion 2
    qu.reverse();
    cout << "\nQueue after reversing: ";
    qu.print();




    system("pause>0");
    return 0;
}