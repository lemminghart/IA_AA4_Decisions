#include "State_Bank.h"

State_Bank::State_Bank() {

}

State_Bank::~State_Bank() {
	//destruir punteros
}

void State_Bank::Update() {
	//depositar oro
	//comprobar riqueza
}

void State_Bank::DepositGold(Agent *miner) {
	gold += miner->getGold();
}