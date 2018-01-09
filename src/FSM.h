#pragma once
#include "State_Bank.h"
#include "State_Home.h"
#include "State_Mine.h"
#include "State_Saloon.h"

#include "State.h"
#include "Agent.h"


class FSM {
protected:
	float gold;
	Vector2D location;

public:
	FSM();
	~FSM();
	
	FSM* ActualState;

	//functions
	virtual void Enter(Agent *agente);
	virtual void Update(Agent *agente);
	virtual void Exit(Agent *agente);
	
	virtual void GoTo();
	

	Vector2D cell2pix(Vector2D cell);
	Vector2D pix2cell(Vector2D pix);

	//actual state -> pointer to the class that rules the actual state

};