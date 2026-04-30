#include <HardwareSerial.h>

//현재 시리얼 통신 상태 정의
enum class ConnectState
{
    NOT_CONNECTED,
    CONNECTED
};

//리눅스 머신에 보낼 명령어 정의
enum class Command
{
    GET_ROOT,
    SEND_S0,
    SEND_S3,
    SEND_S4
};

class CconnectedToSBC
{
    private:
        ConnectState curConnectState;
        HardwareSerial SBCSerial;
    public:
        CconnectedToSBC();
        ConnectState GetConnectState();    //현재 연결 상태를 반환한다.  
        bool ConnectedToSBC();              //SBC와 시리얼통신을 시도한다.
        void SendToSBC();                   //SBC에 명령을 전달한다
};

CconnectedToSBC::CconnectedToSBC() : curConnectState(ConnectState::NOT_CONNECTED)
{

}