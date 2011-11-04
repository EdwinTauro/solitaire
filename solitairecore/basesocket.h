#ifndef BASESOCKET_H
#define BASESOCKET_H


class BaseSocket
{
    public:
        BaseSocket(char zone);
        virtual ~BaseSocket();

    protected:
        int m_nPosition;
        char m_cZone;

    private:
};

#endif // BASESOCKET_H
