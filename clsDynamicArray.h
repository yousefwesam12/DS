#pragma once
#include <iostream>
using namespace std;

template <class T>

class clsDynamicArray
{
    protected:
    int _Size = 0;
    T *TempArray;


    public:
    T * OriginalArray;
    clsDynamicArray(int Size = 0)
        {
            if(Size < 0)
                _Size = 0;

            _Size = Size;
            OriginalArray = new T[_Size];
        }

    ~clsDynamicArray()
    {
        delete []OriginalArray;
    }

    bool SetItem(int Index, T Value)
        {
            if(Index > (_Size - 1) || Index < 0)
            {
                return false;
            }

            OriginalArray[Index] = Value;
            return true;
        }

    bool IsEmpty()
        {
            return (_Size == 0);
        }

    int Size()
        {
            return _Size;
        }

    void PrintList()
        {
            for(int i = 0;i<_Size;i++)
            {
                cout << *(OriginalArray + i) << " ";
            }
            cout << "\n";
        }

    void Resize(int NewSize)
    {
        // Exit The Function instatntly..
        // for ex.. Resize(-1) or Resize(5) and the size is 5..
        if(NewSize < 0 || NewSize == _Size)
        {
            return;
        }
        
        // Allocate New Temp Array With the size passed..
        TempArray = new T[NewSize];

        // Limit the original size to the new size if it is less..
        // for ex.. _Size = 5, NewSize = 2 
        if(_Size > NewSize)
        {
            _Size = NewSize;
            // _Size = 2
        }

        // copy all data from original array untill the size
        for(int i = 0;i<_Size;i++)
        {
            TempArray[i] = OriginalArray[i];
        }

        // In case the New Size is bigger than the original one.
        _Size = NewSize;

        // We delete the previous values.. to free the memory
        delete []OriginalArray;

        // change the pinter of original array in the stack to point to temp array in the heap..
        OriginalArray = TempArray;
        
    }

    void Reverse()
    {
        TempArray = new T [_Size];

        for(int i = 0;i < _Size; i++)
        {
            TempArray[i] = OriginalArray[_Size - 1 - i];
        }

        delete []OriginalArray;

        OriginalArray = TempArray;
    }

    void Clear()
    {
        delete []OriginalArray;
        OriginalArray = nullptr;
        _Size = 0;
    }

    T GetItem(int Index)
    {
        if(Index > _Size - 1 || Index < 0)
        {
            return NULL;
        }

        return OriginalArray[Index];
    }
};