#pragma once

#include "projectile_turret.h"
#include "projectile.h"

Projectile_Turret::Projectile_Turret(Arguments_Projectile_Turret args)
	: Game_Object(args.id, ""), _direction_to_shoot(args.direction_to_shoot)
{
	_translation = args.spawn_position;

	_number_of_shots = args.number_of_shots;
	_ms_between_shots = args.ms_between_shots;
	_ms_until_next_shot = args.ms_between_shots;

	_speed_of_projectile = args.speed_of_projectile;

	_rotation_between_shots = args.rotation_between_shots;
}
Projectile_Turret::~Projectile_Turret()
{
}
void Projectile_Turret::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*, Scene* scene)
{
	_ms_until_next_shot -= milliseconds_to_simulate;
	bool should_shoot = _ms_until_next_shot <= 0;
	if(should_shoot)
	{
		Game_Object* projectile = new Projectile(_translation);

		Vector_2D projectile_velocity = Vector_2D(_direction_to_shoot);
		projectile_velocity.scale(_speed_of_projectile);
		projectile->set_velocity(projectile_velocity);

		scene->add_game_object_to_scene(projectile);

		_ms_until_next_shot = _ms_between_shots;

		bool should_kill_self = _number_of_shots == 0;
		if(should_kill_self)
		{
			_is_dirty = true;
		}

		float angle = _direction_to_shoot.angle();

		_direction_to_shoot.rotate(_rotation_between_shots);

		_number_of_shots -= 1;
	}
}
