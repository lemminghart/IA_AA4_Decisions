#include "FSM.h"

FSM::FSM() {
	ActualState = nullptr;
}

FSM::~FSM() {
	//destruir punteros
	delete ActualState;
}