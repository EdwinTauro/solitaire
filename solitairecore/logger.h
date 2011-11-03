#include <string>
#include <iostream>

#ifndef LOGGER_H
#define LOGGER_H

    using namespace std;


class Logger
{
    public:
        Logger();
        Logger(string szStrValue);
        virtual ~Logger();

        //static Logger getInstance();
        void Info(string szStrValue);
    protected:
    private:
};

#endif // LOGGER_H
