#include <Header/Cstate.h>

class CstateS4 : public Cstate
{
    public:
        void onEnter() override;
        void onExit() override;
        void onUpdate() override;
}