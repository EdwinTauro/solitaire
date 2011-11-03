#include "main.h"
#include <iostream>


Logger m_cLogger;

SolitaireGameEngine cSge;

EXPORT int Square( int X)	// Return Square
 {
    return X*X;
 }

EXPORT int Cube( int X)		// Return Cube
 {
    return X*X*X;
 }


EXPORT int NewGame()       // Start new game
{

    m_cLogger.Info("New game");

    cSge.Init();

    return 0;
}


EXPORT bool IsValidMove(int fromPosition, int toPosition)
{
//    cout << "from position " << fromPosition << "to position " < toPosition;
    return true;
}


























/*#include "main.h"

// a sample exported function
void DLL_EXPORT SomeFunction(const LPCSTR sometext)
{
    MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
*/
