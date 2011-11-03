#include "logger.h"

Logger::Logger()
{
    //ctor
}

Logger::~Logger()
{
    //dtor
}

Logger::Logger(string szStrValue)
{
    //ctor
}

/*
Logger Logger::getInstance()
{
    Logger cLogger;

    return cLogger;

}
*/

void Logger::Info(string szStrValue)
{

    cout << szStrValue << endl;

}
