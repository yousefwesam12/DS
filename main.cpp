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

    
    MyDynamicArray.InsertAtBeginning(400);
    MyDynamicArray.InsertBefore(2,500);
    MyDynamicArray.InsertAfter(2,600);
    MyDynamicArray.InsertAtEnd(800);

    cout << "\n" << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

}