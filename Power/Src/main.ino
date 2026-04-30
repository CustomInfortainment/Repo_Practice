#include <HardwareSerial.h>
#include "Header/Cstatemachine.h"

Cstatemachine stateMachine;

void setup()
{

}

void loop()
{
    stateMachine.onUpdate();
}