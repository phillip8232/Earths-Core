#pragma once

#include "game_object.h"

class Projectile_Turret : public Game_Object
{
public:
	Projectile_Turret(std::string id, float direction_to_shoot, int number_of_shots, int ms_between_shots, int ms_until_next_shot);
	~Projectile_Turret();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input) override;

private:
	Vector_2D _direction_to_shoot;

	int _number_of_shots;
	int _ms_between_shots;

	int _ms_until_next_shot;
};