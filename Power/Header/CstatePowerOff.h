#include <Cstate.h>

class CstatePowerOff : public Cstate
{
    public:
        void onEnter() override;
        void onExit() override;
        void onUpdate() override;
};