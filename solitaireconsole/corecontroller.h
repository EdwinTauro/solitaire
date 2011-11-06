#ifndef CORECONTROLLER_H
#define CORECONTROLLER_H

#include "../solitairecore/main.h"
#include "../solitairecore/boardstate.h"

namespace solitaireconsole
{
    class CoreController
    {
        public:
            CoreController();
            virtual ~CoreController();
            int callSolitaireCore(void);

        protected:
        private:
    };

}

#endif // CORECONTROLLER_H
