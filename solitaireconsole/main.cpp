#include <iostream>
#include "../solitairecore/main.h"

using namespace std;

int callSolitaireCore(void);

int main()
{
    return callSolitaireCore();
    //cout << "Hello world!" << endl;
    //return 0;
}


int callSolitaireCore(void)
{
//    SomeFunction("this is a test");

    int value = 2;
    int square = Square(value);
    int cube = Cube(value);

    cout << "Sqaure of " << value << " is: " << square << endl;
    cout << "Cube of " << value << " is: " << cube << endl;
    return 0;
}
