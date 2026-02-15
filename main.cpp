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

    cout << "\n" << "Item (2) : " << MyDynamicArray.GetItem(2) << endl;

    
    MyDynamicArray.Reverse();
    cout << "\n" << "Array Item after reverse: \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();

    cout << "\n" << "Array Items after clear: \n";
    MyDynamicArray.PrintList();


}