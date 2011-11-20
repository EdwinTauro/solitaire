#include "eastzonesocket.h"

EastZoneSocket::EastZoneSocket() : BaseSocket(east)
{
    //ctor

    // Now call the setters
    setMinPositionY('c');
    setMaxPositionY('e');

    setMinPositionX(1);
    setMaxPositionX(2);

}

EastZoneSocket::~EastZoneSocket()
{
    //dtor
}

