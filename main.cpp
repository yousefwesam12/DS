#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{
    clsDblLinkedList<int> MydblLinkedList;

    if(MydblLinkedList.IsEmpty())
    {
        cout << "\n\nYes, List is Empty.\n";
    }
    else
    {
        cout << "\n\nNo, List is NOT Empty.\n";
    }

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);


    cout << "\n" << "Linked List Content:\n";
    MydblLinkedList.PrintList();
    
    MydblLinkedList.UpdateItem(2,500);

    cout << "\nAfter Updating Item Which Index is (2): \n";
    MydblLinkedList.PrintList();
}
