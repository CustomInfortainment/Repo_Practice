#include "Header/Cstatemachine.h"

void Cstatemachine :: changeState(Cstate* newState)
{
    if(currentState) currentState -> onExit();
    currentState = newState;
    if(currentState) currentState -> onEnter();
}

void Cstatemachine :: allResetState()
{
    if(currentState) currentState -> onExit();
    currentState = nullptr;
}

void Cstatemachine :: onUpdate()
{
    if(currentState) currentState -> onUpdate();
    else return;
}

Cstate* Cstatemachine :: getcurState()
{
    
}