#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{
    clsDblLinkedList<int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    // 3-> 2-> 1->NULL

    clsDblLinkedList<int>::Node *N1 = MydblLinkedList.Find(1);

    MydblLinkedList.DeleteNode(N1);

    cout << "\n" << "Linked List Content:\n";
    MydblLinkedList.PrintList();
  
    cout << "\nNumber of Items in the linked list = " << MydblLinkedList.Size() << endl;
   

}
