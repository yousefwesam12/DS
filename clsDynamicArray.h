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
        if(NewSize < 0 || NewSize == _Size)
        {
            return;
        }

        // Allocate New Temp Array With the size passed..
        TempArray = new T[NewSize];

        // Limit the original size to the new size if it is less..
        if(NewSize < _Size)
        {
            _Size = NewSize;
        }

        // copy all data from original array untill the size
        for(int i = 0;i<_Size;i++)
        {
            TempArray[i] = OriginalArray[i];
        }

        // In case the New Size is bigger than the original one.
        _Size = NewSize;

        // We delete the previous values..
        delete []OriginalArray;

        OriginalArray = TempArray;
        
    }
};