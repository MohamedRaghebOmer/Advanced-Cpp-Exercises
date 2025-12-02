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

    MyDynamicArray.resize(2);
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";
    cout << "\nArray Items after resize to 2 : \n";
    MyDynamicArray.print();



    MyDynamicArray.resize(10);
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";
    cout << "\nArray Items after resize to 10 : \n";
    MyDynamicArray.print();

    system("pause>0");
    return 0;
}