#include "northzonesocket.h"


NorthZoneSocket::NorthZoneSocket(void) : BaseSocket(north)
{

    // Now call the setters
    setMinPositionY('a');
    setMaxPositionY('b');

    setMinPositionX(3);
    setMaxPositionX(5);

}

NorthZoneSocket::~NorthZoneSocket()
{
    //dtor
}
