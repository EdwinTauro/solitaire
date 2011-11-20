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
        void setPositionY(char position)
        {
            m_cPositionY = position;
        }
        void setPositionX(int position)
        {
            m_nPositionX = position;
        }
        void setPlugged(bool plug)
        {
            m_bPlug = plug;
        }
    protected:
        ZoneEnum m_eZone;


        void setMinPositionY(char c)
        {
            m_cMinPositionY = c;
        }

        void setMaxPositionY(char c)
        {
            m_cMaxPositionY = c;
        }

        void setMinPositionX(int i)
        {
            m_nMinPositionX = i;
        }

        void setMaxPositionX(int i)
        {

            m_nMaxPositionX = i;
        }

    private:
        char m_cPositionY;
        int m_nPositionX;

        bool m_bPlug;

        char m_cMaxPositionY;
        char m_cMinPositionY;

        int m_nMaxPositionX;
        int m_nMinPositionX;
};

#endif // BASESOCKET_H
