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

    
    int Index = MyDynamicArray.Find(30);

    if(Index == -1)
    {
        cout << "\n" << "Item was not found :-(\n";
    }
    else
    {
        cout << "\n" << "30 is found at index : " << Index; 
    }

     
    MyDynamicArray.DeleteItem(30);
    cout << "\n" << "Array Items after deleteing 30: \n";
    cout << "\n" << "Array Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

}