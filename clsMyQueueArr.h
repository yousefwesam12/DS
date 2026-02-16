#pragma once
#include <iostream>
#include "clsDynamicArray.h"

template <class T>

class clsMyQueueArr
{
    protected:
    clsDynamicArray <T> MyDynamicArray;

    public:
    void push(T Value)
    {
        MyDynamicArray.InsertAtEnd(Value);
    }
    void Print()
    {
        MyDynamicArray.PrintList();
    }
    int Size()
    {
        return MyDynamicArray.Size();
    }
    T front()
    {
        if(MyDynamicArray.IsEmpty())
        {
            throw::std::runtime_error("\nError, the array is empty.");
            return NULL;
        }

        return MyDynamicArray.GetItem(0);
    }
    T back()
    {
        if(MyDynamicArray.IsEmpty())
        {
            throw::std::runtime_error("\nError, the array is empty.");
            return NULL;
        }

        return MyDynamicArray.GetItem(MyDynamicArray.Size() - 1);
    }
    void Reverse()
    {
        MyDynamicArray.Reverse();
    }
    void pop()
    {
        MyDynamicArray.DeleteFirstItem();
    }
    T GetItem(int Index)
    {
        MyDynamicArray.GetItem(Index);
    }
    void Clear()
    {
        MyDynamicArray.Clear();
    }
    void InsertAtFront(T Value)
    {
        MyDynamicArray.InsertAtBeginning(Value);
    }
    void InsertAtBack(T Value)
    {
        MyDynamicArray.InsertAtEnd(Value);
    }
    void UpdateItem(int Index, T NewValue)
    {
        MyDynamicArray.SetItem(Index,NewValue);
    }
    void InsertAfter(int Index, T Value)
    {
        MyDynamicArray.InsertAfter(Index,Value); 
    }

};