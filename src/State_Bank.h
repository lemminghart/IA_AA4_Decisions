#pragma once
#include "FSM.h"
#include "Agent.h"
#include "utils.h"

class State_Bank : public FSM {
public:
	State_Bank();
	~State_Bank();

	//functions
	void Enter(Agent *agente);
	void Update(Agent *agente);
	void Exit(Agent *agente);


	


	//void DepositGold(Agent *miner);
	//bool IsWealthy();
	//void ChangeState();

	//deposit gold
	//wealthy?
		//go home
		//change state
	//not wealthy?
		//return to mine
		//change state
};