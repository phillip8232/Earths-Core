#pragma once

#include "Pattern_M1.h"
#include "projectile_turret.h"

Pattern_M1::Pattern_M1(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position)
	: Game_Object(id, "")
{
	_ms_until_start = ms_until_start;
	_ms_until_end = ms_until_end;
	_started = false;
	_translation = spawn_position;
}
Pattern_M1::~Pattern_M1()
{
}
void Pattern_M1::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*, Scene* scene, Game_Manager* game_manager)
{
	_ms_until_start -= milliseconds_to_simulate;
	bool should_start = _ms_until_start <= 0;
	if (!_started && should_start)
	{
		Arguments_Projectile_Turret args;
		args.direction_to_shoot = 0;
		args.ms_between_shots = 500;
		args.number_of_shots = _ms_until_end / args.ms_between_shots;
		args.speed_of_projectile = 0.45f;
		args.rotation_between_shots = 0.f;

		//yeah gonna be alot of position changes
		args.direction_to_shoot = 90;


		args.spawn_position = Vector_2D(0, 0);
		args.id = "Projectile_Turret1";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(200, 0);
		args.id = "Projectile_Turret2";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(400, 0);
		args.id = "Projectile_Turret3";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(600, 0);
		args.id = "Projectile_Turret4";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(800, 0);
		args.id = "Projectile_Turret5";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1000, 0);
		args.id = "Projectile_Turret6";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1200, 0);
		args.id = "Projectile_Turret7";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1400, 0);
		args.id = "Projectile_Turret8";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1580, 0);
		args.id = "Projectile_Turret9";
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