#ifdef CSTATE_H

#include <Header/bootstrap.h>

#define CSTATE_H
#endif

class Cstate
{
    public:
        virtual void onEnter() {}               //해당 상태에 진입 했을 때
        virtual void onExit() {}                //해당 상태가 끝이 났을 때
        virtual void onUpdate() {}              //해당 상태 진행 중.
        virtual ~Cstate() {}
};