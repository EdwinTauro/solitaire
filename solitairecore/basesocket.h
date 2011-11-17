#ifndef BASESOCKET_H
#define BASESOCKET_H

enum ZoneEnum
{
    north,
    south,
    east,
    west,
    central
};


class BaseSocket
{
    public:
        BaseSocket(ZoneEnum zone);
        virtual ~BaseSocket();
        void setPosition(int position)
        {
            m_nPosition = position;
        }

    protected:
        ZoneEnum m_eZone;

    private:
        int m_nPosition;
};

#endif // BASESOCKET_H
