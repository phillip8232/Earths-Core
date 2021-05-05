#pragma once

#include "Pattern_M6.h"
#include "projectile_turret.h"

Pattern_M6::Pattern_M6(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position)
	: Game_Object(id, "")
{
	_ms_until_start = ms_until_start;
	_ms_until_end = ms_until_end;
	_started = false;
	_translation = spawn_position;
}
Pattern_M6::~Pattern_M6()
{
}
void Pattern_M6::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*, Scene* scene)
{
	_ms_until_start -= milliseconds_to_simulate;
	bool should_start = _ms_until_start <= 0;
	if (!_started && should_start)
	{
		Arguments_Projectile_Turret args;
		args.direction_to_shoot = 0;
		args.ms_between_shots = 250;
		args.number_of_shots = _ms_until_end / args.ms_between_shots;
		args.speed_of_projectile = 0.38f;
		args.rotation_between_shots = 15.f;


		args.rotation_between_shots = 15.f;
		args.id = "right-down-spray2";
		args.spawn_position = Vector_2D(750, 350);
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.rotation_between_shots = -15.f;
		args.id = "left-down-spray2";
		args.spawn_position = Vector_2D(750, 350);
		scene->add_game_object_to_scene(new Projectile_Turret(args));
		//other way
		args.direction_to_shoot = 180;

		args.rotation_between_shots = 15.f;
		args.id = "right-down-spray5";
		args.spawn_position = Vector_2D(750, 350);
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.rotation_between_shots = -15.f;
		args.id = "left-down-spray5";
		args.spawn_position = Vector_2D(750, 350);
		scene->add_game_object_to_scene(new Projectile_Turret(args));


		_started = true;
	}

	if (_started)
	{
		_ms_until_end -= milliseconds_to_simulate;
		bool should_kill_self = _ms_until_end <= 0;
		if (should_kill_self)
		{
			_is_dirty = true;
		}
	}

}
