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

    int Index = MyDynamicArray.find(30);
    if (Index == -1)
        cout << "\nItem was not Found :-(\n ";
    else
        cout << "\n30 is found at index : " << Index;

    MyDynamicArray.DeleteItem(30);
    cout << "\n\nArray Items after deleting 30:";
    MyDynamicArray.print();
    cout << "\nArray Size: " << MyDynamicArray.size() << "\n";


    system("pause>0");
    return 0;
}