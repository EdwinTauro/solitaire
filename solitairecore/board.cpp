#include "board.h"
#include <cstdlib>

Board::Board()
{

    //ctor
    char startY = 'a';

    for (int x=1, i=0; i < 6; i++, x++)
    {
        for (int y=(int)startY, j=0; j < 6; j++, y++)
        {
            m_acNorthZoneSockets[i].setPositionX(x);
            m_acNorthZoneSockets[i].setPositionY(y);
            m_acNorthZoneSockets[i].setPlugged(true);

            m_acSouthZoneSockets[i].setPositionX(x);
            m_acSouthZoneSockets[i].setPositionY(y);
            m_acSouthZoneSockets[i].setPlugged(true);

            m_acEastZoneSockets[i].setPositionX(x);
            m_acEastZoneSockets[i].setPositionY(y);
            m_acWestZoneSockets[i].setPlugged(true);

            m_acWestZoneSockets[i].setPositionX(x);
            m_acWestZoneSockets[i].setPositionY(y);
            m_acWestZoneSockets[i].setPlugged(true);

            m_acCentralZoneSockets[i].setPositionX(x);
            m_acCentralZoneSockets[i].setPositionY(y);
            m_acCentralZoneSockets[i].setPlugged(true);
        }
    }
}

Board::~Board()
{
    //dtor
}

