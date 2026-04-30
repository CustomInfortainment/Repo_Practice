#include <Header/Cstate.h>

class CstateS3 : public Cstate
{
    public:
        void onEnter() override;
        void onExit() override;
        void onUpdate() override;
}