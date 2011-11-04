#include <iostream>
#include "logger.h"
#include "board.h"

#ifndef SOLITAIREGAMEENGINE_H
#define SOLITAIREGAMEENGINE_H


class SolitaireGameEngine
{
    public:
        SolitaireGameEngine();
        virtual ~SolitaireGameEngine();
        int Init();
    protected:
    private:
};

#endif // SOLITAIREGAMEENGINE_H
