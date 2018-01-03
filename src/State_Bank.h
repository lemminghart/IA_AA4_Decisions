#pragma once
#include "FSM.h"
#include "Agent.h"

class State_Bank : public FSM {
public:
	State_Bank();
	~State_Bank();
	float gold; //cantidad de oro que hay en el banco

	//functions
	void Update();
	


	void DepositGold(Agent *miner);
	bool IsWealthy();
	void ChangeState();
	//deposit gold
	//wealthy?
		//go home
		//change state
	//not wealthy?
		//return to mine
		//change state
};