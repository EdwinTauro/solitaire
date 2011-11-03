#include <windows.h>
#include <iostream>
#include "logger.h"
#include "solitairegameengine.h"

#define EXPORT __declspec (dllexport)


EXPORT int Square( int X);
EXPORT int Cube( int X);

EXPORT int NewGame();
EXPORT bool IsValidMove(int fromPosition, int toPosition);

/*
#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
*/
/*  To use this exported function of dll, include this header
 *  in your project.
 */
/*
#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT SomeFunction(const LPCSTR sometext);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
*/
