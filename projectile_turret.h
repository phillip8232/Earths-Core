#pragma once

#include "game_object.h"

struct Arguments_Projectile_Turret
{
	std::string id;
	float direction_to_shoot;
	int number_of_shots;
	int ms_between_shots;
	float speed_of_projectile;
	float rotation_between_shots;
	Vector_2D spawn_position;
};

class Projectile_Turret : public Game_Object
{
public:
	Projectile_Turret(Arguments_Projectile_Turret args);
	~Projectile_Turret();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input, Scene* scene, Game_Manager* game_manager) override;

private:
	Vector_2D _direction_to_shoot;


	int _number_of_shots;
	int _ms_between_shots;

	int _ms_until_next_shot;

	float _speed_of_projectile;

	float _rotation_between_shots;
};