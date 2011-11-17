#include "board.h"
#include <cstdlib>

Board::Board()
{

    //ctor
    for (int i=0; i < 6; i++)
    {
        m_acNorthZoneSockets[i].setPosition(i);
        m_acSouthZoneSockets[i].setPosition(i);
        m_acEastZoneSockets[i].setPosition(i);
        m_acWestZoneSockets[i].setPosition(i);
    }

    for (int i=0; i < 9; i++)
        m_acCentralZoneSockets[i].setPosition(i);
}

Board::~Board()
{
    //dtor
}

