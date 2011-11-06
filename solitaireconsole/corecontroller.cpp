#include "corecontroller.h"
#include "../solitairecore/boardstate.h"

using namespace solitaireconsole;


CoreController::CoreController()
{
    //ctor
}

CoreController::~CoreController()
{
    //dtor
}

int callSolitaireCore(void)
{
//    SomeFunction("this is a test");

    int value = 2;
    int square = Square(value);
    int cube = Cube(value);

    cout << "Sqaure of " << value << " is: " << square << endl;
    cout << "Cube of " << value << " is: " << cube << endl;

    BoardState boardState = NewGame();

    return 0;
}
