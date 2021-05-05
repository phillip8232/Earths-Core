#pragma once

#include "Pattern_M3.h"
#include "projectile_turret.h"

Pattern_M3::Pattern_M3(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position)
	: Game_Object(id, "")
{
	_ms_until_start = ms_until_start;
	_ms_until_end = ms_until_end;
	_started = false;
	_translation = spawn_position;
}
Pattern_M3::~Pattern_M3()
{
}
void Pattern_M3::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*, Scene* scene, Game_Manager* game_manager)
{
	_ms_until_start -= milliseconds_to_simulate;
	bool should_start = _ms_until_start <= 0;
	if (!_started && should_start)
	{
		Arguments_Projectile_Turret args;
		args.direction_to_shoot = 0;
		args.ms_between_shots = 1000;
		args.number_of_shots = _ms_until_end / args.ms_between_shots;
		args.speed_of_projectile = 0.35f;
		args.rotation_between_shots = 0.f;

		//yeah gonna be alot of position changes
		args.direction_to_shoot = 0;

		args.spawn_position = Vector_2D(0, 0);
		args.id = "Projectile_LEFT";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 200);
		args.id = "Projectile_LEFT1";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 400);
		args.id = "Projectile_LEFT2";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 600);
		args.id = "Projectile_LEFT3";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 750);
		args.id = "Projectile_LEFT4";
		scene->add_game_object_to_scene(new Projectile_Turret(args));


		args.direction_to_shoot = 180;

		args.spawn_position = Vector_2D(1600, 100);
		args.id = "Projectile_RIGHT";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1600, 300);
		args.id = "Projectile_RIGHT1";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1600, 500);
		args.id = "Projectile_RIGHT2";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1600, 700);
		args.id = "Projectile_RIGHT3";
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