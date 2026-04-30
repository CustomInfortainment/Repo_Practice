#include "Cstate.h"

// SBC로부터 상태를 체크하고 전환.
class Cstatemachine
{
    public:
        SBC* curDevice;
        Cstate* currentState;
    
        Cstatemachine() : currentState(nullptr) {}

        void changeState(Cstate* newState);
        void allResetState(Cstate* curState);
        void checkTransition();
        void onUpdate();

        Cstate* getCurState();                  //실기기로부터 현재 상태를 불러온다.
};