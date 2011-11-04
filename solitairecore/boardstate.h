#ifndef BOARDSTATE_H
#define BOARDSTATE_H

#include "NorthZoneSocket.h"
#include "SouthZoneSocket.h"
#include "EastZoneSocket.h"
#include "WestZoneSocket.h"
#include "CentralZoneSocket.h"

class BoardState
{
    public:
        BoardState();
        NorthZoneSocket aNorthZoneSockets[];
        SouthZoneSocket aSouthZoneSockets[];
        EastZoneSocket aEastZoneSockets[];
        WestZoneSocket aWestZoneSockets[];
        CentralZoneSocket aCentralZoneSockets[];

    protected:
    private:
};

#endif // BOARDSTATE_H
