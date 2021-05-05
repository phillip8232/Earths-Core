#pragma once

#include "Pattern_M2.h"
#include "projectile_turret.h"

Pattern_M2::Pattern_M2(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position)
	: Game_Object(id, "")
{
	_ms_until_start = ms_until_start;
	_ms_until_end = ms_until_end;
	_started = false;
	_translation = spawn_position;
}
Pattern_M2::~Pattern_M2()
{
}
void Pattern_M2::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*, Scene* scene, Game_Manager* game_manager)
{
	_ms_until_start -= milliseconds_to_simulate;
	bool should_start = _ms_until_start <= 0;
	if (!_started && should_start)
	{
		Arguments_Projectile_Turret args;
		args.direction_to_shoot = 0;
		args.ms_between_shots = 600;
		args.number_of_shots = _ms_until_end / args.ms_between_shots;
		args.speed_of_projectile = 0.25f;
		args.rotation_between_shots = 0.f;

		//yeah gonna be alot of position changes
		args.direction_to_shoot = 90;


		args.spawn_position = Vector_2D(100, 0);
		args.id = "Projectile_Turret11";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(300, 0);
		args.id = "Projectile_Turret12";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(500, 0);
		args.id = "Projectile_Turret13";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(700, 0);
		args.id = "Projectile_Turret14";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(900, 0);
		args.id = "Projectile_Turret15";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1100, 0);
		args.id = "Projectile_Turret16";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1300, 0);
		args.id = "Projectile_Turret17";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(1500, 0);
		args.id = "Projectile_Turret18";
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