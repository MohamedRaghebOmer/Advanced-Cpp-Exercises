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

    cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << "\n";

    MyDynamicArray.reverse();
    cout << "\nArray Items after reverse: \n";
    MyDynamicArray.print();

    MyDynamicArray.clear();

    cout << "\nArray Items after clear: \n";
    MyDynamicArray.print();


    system("pause>0");
    return 0;
}