#include <iostream>
#include "clsMyDynamicArray.h"

using namespace std;

int main()
{

    clsMyDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "Is Empty?  " << MyDynamicArray.isEmpty();
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";
    cout << "\nArray Items: \n";
    MyDynamicArray.print();

    MyDynamicArray.InsertAtBeginning(400);
    cout << "\n\nArray after insert 400 at Begining:";
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";
    MyDynamicArray.print();

    MyDynamicArray.InsertBefore(2, 500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";
    MyDynamicArray.print();

    MyDynamicArray.InsertAfter(2, 600);
    cout << "\n\nArray after insert 600 after index 2:";
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";
    MyDynamicArray.print();


    MyDynamicArray.print();
    MyDynamicArray.InsertAtEnd(800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";
    MyDynamicArray.print();



    system("pause>0");
    return 0;
}