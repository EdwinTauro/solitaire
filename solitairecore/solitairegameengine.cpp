#include <iostream>
#include "solitairegameengine.h"


SolitaireGameEngine::SolitaireGameEngine()
{
    //ctor
}

SolitaireGameEngine::~SolitaireGameEngine()
{
    //dtor
}

BoardState SolitaireGameEngine::Init()
{


    m_cLogger.Info("Initializing board for new game ....");
    BoardState cBoardState;
    m_cLogger.Info("Initializing board Done");

    return cBoardState;
}
