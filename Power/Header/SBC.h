#include "Header/pininfo.h"

enum class PinState
{
    S0,
    S3,
    S4,
    OFF
};

class SBC
{
    private :
        PinState curState;    
    public :
        SBC();                          //초기 상태 지정
        PinState getCurrentState();         //Cstate 기준이 아닌 Serial 통신 기준.
};

SBC::SBC() : curState(PinState::OFF)
{
    
}