#ifndef BOARD_H
#define BOARD_H


#include "NorthZoneSocket.h"
#include "SouthZoneSocket.h"
#include "EastZoneSocket.h"
#include "WestZoneSocket.h"
#include "CentralZoneSocket.h"

class Board
{
    public:

        NorthZoneSocket m_acNorthZoneSockets[6];
        SouthZoneSocket m_acSouthZoneSockets[6];
        EastZoneSocket m_acEastZoneSockets[6];
        WestZoneSocket m_acWestZoneSockets[6];
        CentralZoneSocket m_acCentralZoneSockets[9];

        Board();
        virtual ~Board();


    protected:
    private:
};

#endif // BOARD_H
