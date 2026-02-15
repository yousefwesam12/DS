#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0,10);
    MyDynamicArray.SetItem(1,20);
    MyDynamicArray.SetItem(2,30);
    MyDynamicArray.SetItem(3,40);
    MyDynamicArray.SetItem(4,50);

    cout << "\n" << "Is Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\n" << "Array Size: " << MyDynamicArray.Size();
    cout << "\n\n" << "Array Items : \n";

    MyDynamicArray.PrintList();

    
    MyDynamicArray.DeleteItem(2);
    cout << "\n" << "Array Item after deleting item(2): \n";
    cout << "\n" << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

}