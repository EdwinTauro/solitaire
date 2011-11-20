#include <iostream>
#include "logger.h"
#include "boardstate.h"

#ifndef SOLITAIREGAMEENGINE_H
#define SOLITAIREGAMEENGINE_H


class SolitaireGameEngine
{
    public:
        SolitaireGameEngine();
        virtual ~SolitaireGameEngine();
        BoardState Init();
    protected:
        Logger m_cLogger;
    private:
};

#endif // SOLITAIREGAMEENGINE_H
