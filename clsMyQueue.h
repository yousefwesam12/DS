#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

template <class T>

class clsMyQueue 
{

    private:
    clsDblLinkedList <T> MyQueue;

    public:
    void push(T Value)
    {
        MyQueue.InsertAtEnd(Value);
    }

    void pop()
    {
        MyQueue.DeleteFirstNode();
    }

    T front()
    {
        if(MyQueue.IsEmpty())
        {
            throw::std::runtime_error("Queue is empty");
        }

        return MyQueue.GetItem(0);
    }
   
    T back()
    {
        if(MyQueue.IsEmpty())
        {
            throw::std::runtime_error("Queue is empty");
        }
        return MyQueue.GetItem(MyQueue.Size() - 1);
    }
    
    short Size()
    {
        return MyQueue.Size();
    }
    
    void Print()
    {
        MyQueue.PrintList();
    }

    T GetItem(int Index)
    {
        return MyQueue.GetItem(Index);
    }

    void Reverse()
    {
        MyQueue.Reverse();
    }

    void UpdateItem(int Index, T Value)
    {
        MyQueue.UpdateItem(Index,Value);
    }

    void InsertAfter(int Index, T Value)
    {
        MyQueue.InsertAfter(Index,Value);
    }
    
    void InsertAtFront(T Value)
    {
        MyQueue.InsertAtBeginning(Value);
    }

    void InsertAtBack(T Value)
    {
        MyQueue.InsertAtEnd(Value);
    }

    void Clear()
    {
        MyQueue.Clear();
    }
};