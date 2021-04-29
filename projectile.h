#pragma once

#include "game_object.h"

class Projectile : public Game_Object
{
public:
	Projectile();
	~Projectile();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input) override;
private:
	static int next_id;
};