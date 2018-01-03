#pragma once
#include <iostream>
#include <minmax.h>
#include <SDL.h>
#include <SDL_image.h>
#include "SDL_SimpleApp.h"
#include "Vector2D.h"
#include "utils.h"
#include "SteeringBehavior.h"

#define MAX_GOLD_CAPACITY 15.f
#define MAX_THIRST 10.f
#define MAX_TIRED 10.f


class Agent
{
	friend class SteeringBehavior;

private:
	SteeringBehavior *steering_behavior;
	Vector2D position;
	Vector2D velocity;
	Vector2D target;

	float mass;
	float orientation;
	float max_force;
	float max_velocity;

	float gold; //quantity of gold agent carries
	float thirst; // 0 - 10 The bigger the number, more thirsty is the character(more will drink)
	float tired; // 0-10 The bigger the number, more tired is the character (more will sleep)

	SDL_Color color;

	SDL_Texture *sprite_texture;
	bool draw_sprite;
	int sprite_num_frames;
	int sprite_w;
	int sprite_h;


public:
	Agent();
	~Agent();
	SteeringBehavior *Behavior();
	Vector2D getPosition();
	Vector2D getTarget();
	Vector2D getVelocity();
	float getMaxVelocity();
	void setPosition(Vector2D position);
	void setTarget(Vector2D target);
	void setVelocity(Vector2D velocity);
	void setMass(float mass);
	void setColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
	void update(Vector2D steering_force, float dtime, SDL_Event *event);
	void draw();
	bool Agent::loadSpriteTexture(char* filename, int num_frames=1);

	Vector2D cell2pix(Vector2D cell);
	Vector2D pix2cell(Vector2D pix);

	//functions goTo
	void goToBank();
	void goToHome();
	void goToMine();
	void goToSaloon();

	//functions
	float getGold();
	void setGold(float dineros);
};
