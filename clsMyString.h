#pragma once
#include <iostream>
#include <stack>
using namespace std;

class clsMyString
{
    private:
    string _CurrentValue;
    stack <string> UndoStack;
    stack <string> RedoStack;

    public:
    void SetValue(string NewValue)
    {
        UndoStack.push(_CurrentValue);
        _CurrentValue = NewValue;
    }
    string GetValue()
    {
        return this->_CurrentValue;
    }
    void Undo()
    {
        if(!UndoStack.empty())
        {
            RedoStack.push(_CurrentValue);

            this->_CurrentValue = UndoStack.top();

            UndoStack.pop();
        }
    }
    void Redo()
    {
        if(!RedoStack.empty())
        {
            UndoStack.push(_CurrentValue);

            this->_CurrentValue = RedoStack.top();

            RedoStack.pop();
        }
    }

};
