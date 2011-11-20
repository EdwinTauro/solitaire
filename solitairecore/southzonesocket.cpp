#include "southzonesocket.h"

SouthZoneSocket::SouthZoneSocket() : BaseSocket(south)
{
    //ctor

    // Now call the setters
    setMinPositionY('f');
    setMaxPositionY('g');

    setMinPositionX(3);
    setMaxPositionX(5);
}

SouthZoneSocket::~SouthZoneSocket()
{
    //dtor
}
