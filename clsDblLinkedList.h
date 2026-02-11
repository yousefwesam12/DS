#pragma once
#include <iostream>
using namespace std;

template <class T>

class clsDblLinkedList
{
    private:

    short _Size;

    bool _IsEmptyLinkedList()
    {
        return (Head == NULL);
    }
   
    public:

    class Node
    {
        public:
        Node *Next;
        Node *Prev;
        T Value;
    };
    
    Node *Head;

    clsDblLinkedList()
    {
        _Size = 0;
        Head = NULL;
    }

    void InsertAtBeginning(T Value)
    {
        Node * NewNode = new Node();

        NewNode->Value    = Value;
        NewNode->Next     = Head;
        NewNode->Prev     = NULL;

        if(Head != NULL)
        {
            Head->Prev = NewNode;
        }

        Head = NewNode;

        _Size++;
    }

    Node *Find(T Value)
    {
        Node *Temp = Head;

        while(Temp != NULL)
        {
            if(Temp->Value == Value)
            {
                return Temp;
            }

            Temp = Temp->Next;
        }

        return NULL;
    }

    void InsertAfter(Node *Current, T Value)
    {
        if(Current == NULL)
        {
            return;
        }   

        Node *NewNode = new Node();

        NewNode->Value = Value;
        NewNode->Prev = Current;
        NewNode->Next = Current->Next; 

		// لازم نتاكد إنه في نود عشان نتحكم في الـ Prev بتاعها..
        if(Current->Next != NULL)
        {
	    // الـ Current->Next->Prev هي هي الـ Prev بتاع النود الي بعد
	    // النود الي بعمل Inseret After ليها.
            Current->Next->Prev = NewNode;
        }

        Current->Next = NewNode; 

        _Size++;
    }

    void InsertAtEnd(T Value)
    {
        Node *NewNode = new Node();
        NewNode->Next = NULL;
        NewNode->Value = Value;

		// In case, the linked list is empty.
        if(_IsEmptyLinkedList())
        {
            NewNode->Prev = NULL;
            Head = NewNode;
            _Size++;
            return;
        }

        Node *Current = Head;
		
        while(Current->Next != NULL)
        {
            Current = Current->Next;
        }

        Current->Next = NewNode;
        NewNode->Prev = Current;
        _Size++;
    }

    void PrintList()
    {
        Node *Temp = Head;

        while(Temp != NULL)
        {
            cout << Temp->Value << " ";
            Temp = Temp->Next;
        }
        cout << "\n";
    }

    void DeleteNode(Node * &ToBeDeleted)
    {
        // In Case of empty Linked List, or not found node..
        if(_IsEmptyLinkedList() || ToBeDeleted == NULL)
        { 
            return;
        }

        // In case of it's first node..you should move the head.
        if(Head == ToBeDeleted)
        {
            Head = ToBeDeleted->Next;
        }

        // Assure that next is not NULL to avoid Seg Fault..
        // You can't say NULL->Prev for example.

        if(ToBeDeleted->Next != NULL)
        {
            ToBeDeleted->Next->Prev = ToBeDeleted->Prev;
        }

        // Assure that prev is not NULL to avoid Seg Fault..
        // You can't say NULL->Next for example.
        if(ToBeDeleted->Prev != NULL)
        {
            ToBeDeleted->Prev->Next = ToBeDeleted->Next;
        }

        _Size--;
        delete ToBeDeleted;
    }

    void DeleteFirstNode()
    {
		// Empty.
        if(_IsEmptyLinkedList())
        {
            return;
        }
		
		// First Item.
        if(Head->Next == NULL)
        {
            delete Head;
            Head = NULL;
            _Size--;
            return;
        }
		
		// In order to release it from the memory, we make temp.
        Node *temp = Head;

		// At here, I am sure head->Next != NULL.
        Head->Next->Prev = NULL;
    
        // Move The Head.
        Head = Head->Next;
	
        _Size--;

	    // delete keyword.
        delete temp;

    }

    void DeleteLastNode()
    {
        // The Linked List is empty.
        if(_IsEmptyLinkedList())
        {
            return;
        }

        // The Linked List Has One Node.
        if(Head->Next == NULL)
        {
            delete Head;
            Head = NULL;
            _Size--;
            return;
        }

        Node *Current = Head;

        // We need to find the node before the last node..
        while(Current->Next->Next != NULL)
        {
            Current = Current->Next;
        }

        // delete The last node..
        Node *Temp = Current->Next;
        delete Temp;

        // قبل الاخيرة
        Current->Next = NULL;
        _Size--;
    }

    short Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (Size() == 0 ? true : false);
    }
};