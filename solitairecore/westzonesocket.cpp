#include "westzonesocket.h"

WestZoneSocket::WestZoneSocket() : BaseSocket(west)
{
    //ctor

    // Now call the setters
    setMinPositionY('c');
    setMaxPositionY('e');

    setMinPositionX(6);
    setMaxPositionX(7);

}

WestZoneSocket::~WestZoneSocket()
{
    //dtor
}
