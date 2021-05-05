#pragma once

#include "game_object.h"
#include "game_manager.h"

class Projectile : public Game_Object
{
public:
	Projectile(Vector_2D spawn_position);
	~Projectile();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input, Scene* scene, Game_Manager* game_manager) override;

private:
	static int next_id;

	Vector_2D _spawn_position;
};







