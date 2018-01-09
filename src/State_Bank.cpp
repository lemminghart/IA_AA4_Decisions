#include "State_Bank.h"

State_Bank::State_Bank() {
	location = cell2pix(Vector2D(14, 20));
}

State_Bank::~State_Bank() {
	//destruir punteros
}

void State_Bank::Enter(Agent *agente) {
	//go to bank
	agente->setTarget = location; //posición del banco en el mapa
}

void State_Bank::Update(Agent *agente) {
	//comprobamos que el agente haya llegado al sitio
	if (agente->getPosition == location) {
		//depositar oro
		gold += agente->getGold();
		agente->setGold(0.f);
		
		//comprobar riqueza
		if (gold > WEALTHY) {
			Exit(agente);
		}
	}
}

void State_Bank::Exit(Agent *agente) {
	//cambiamos el estado
}