#include <Cstate.h>

class CstatePowerOn : public Cstate
{
    public:
        void onEnter() override;
        void onExit() override;
        void onUpdate() override;
};