#include "FSM.h"

FSM::FSM() {
	ActualState = nullptr;
}

FSM::~FSM() {
	//destruir punteros
	delete ActualState;
}

void FSM::Enter(Agent *agente) {

}

void FSM::Update(Agent *agente) {

}

void FSM::Exit(Agent *agente) {

}

void FSM::GoTo() {

}

Vector2D Agent::cell2pix(Vector2D cell)
{
	int offset = CELL_SIZE / 2;
	return Vector2D(cell.x*CELL_SIZE + offset, cell.y*CELL_SIZE + offset);
}

Vector2D Agent::pix2cell(Vector2D pix)
{
	return Vector2D((float)((int)pix.x / CELL_SIZE), (float)((int)pix.y / CELL_SIZE));
}