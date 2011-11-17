#ifndef NORTHZONESOCKET_H
#define NORTHZONESOCKET_H

#include "BaseSocket.h"


class NorthZoneSocket : public BaseSocket
{
    public:
        NorthZoneSocket(void);
        virtual ~NorthZoneSocket();

    protected:

    private:
        int position;
};

#endif // NORTHZONESOCKET_H
