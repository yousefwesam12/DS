#include <iostream>
#include "clsMyString.h"
using namespace std;

int main()
{

    cout << "\n\n\t\t\t\t\tUndo/Redo Project\n\n";

    clsMyString S1;

    S1.SetValue("A");
    cout << "\n S1 = " << S1.GetValue() << endl;

    S1.SetValue("B");
    cout << "\n S1 = " << S1.GetValue() << endl;

    cout << "\n\nUndo : ";
    cout << "\n______________\n";

    S1.Undo();
    cout << "\n" << "S1 after undo = " << S1.GetValue() << endl;

    cout << "\n\nRedo : ";
    cout << "\n______________\n";

    S1.Redo();
    cout << "\n" << "S1 after redo = " << S1.GetValue() << endl;

}