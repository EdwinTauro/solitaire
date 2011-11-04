#include <iostream>
#include "abstractbucket.h"


class Zone
{
public:
        ZoneStruct m_sZone;


        static Zone getInstance()
        {
//            return new Zone();
            Zone cZone;
            return cZone;
        };
private:
    Zone()
    {
            m_sZone.east = 'e';
            m_sZone.west = 'w';
            m_sZone.center = 'c';
            m_sZone.north = 'n';
            m_sZone.south = 's';
    };




};

class AbstractBucket
{

protected:
   int m_nPosition;
   ZoneStruct sZone;

    AbstractBucket(ZoneStruct zone, int position)
    {
            sZone = zone;
            m_nPosition = position;
    };

public:
    bool AcceptableLink()
    {
        return true;
    }

};



