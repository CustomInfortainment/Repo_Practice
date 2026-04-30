#include "Header/CconnectedToSBC.h"
#include "Header/pininfo.h"

ConnectState CconnectedToSBC::GetConnectState()
{
    return curConnectState;
}

bool CconnectedToSBC::ConnectedToSBC()
{
    SBCSerial.begin(115200, SERIAL_8N1, PIN_RX2, PIN_TX2);

    if(SBCSerial)
    {
        curConnectState = ConnectedToSBC::CONNECTED;
        return true;
    }
    else
    {
        curConnectState = ConnectedToSBC::NOT_CONNECTED;
        return false;
    }
}

void CconnectedToSBC::SendToSBC()
{
    if(GetConnectState() == ConnectState::NOT_CONNECTED)
        return;
    
    
}