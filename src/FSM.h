#pragma once
#include "State_Bank.h"
#include "State_Home.h"
#include "State_Mine.h"
#include "State_Saloon.h"

#include "State.h"

class FSM {
public:
	FSM();
	~FSM();
	
	FSM* ActualState;
	//actual state -> pointer to the class that rules the actual state

};