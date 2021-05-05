#pragma once

#include "Pattern_M5.h"
#include "projectile_turret.h"

Pattern_M5::Pattern_M5(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position)
	: Game_Object(id, "")
{
	_ms_until_start = ms_until_start;
	_ms_until_end = ms_until_end;
	_started = false;
	_translation = spawn_position;
}
Pattern_M5::~Pattern_M5()
{
}
void Pattern_M5::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*, Scene* scene, Game_Manager* game_manager)
{
	_ms_until_start -= milliseconds_to_simulate;
	bool should_start = _ms_until_start <= 0;
	if (!_started && should_start)
	{
		Arguments_Projectile_Turret args;
		args.direction_to_shoot = 0;
		args.ms_between_shots = 1000;
		args.number_of_shots = _ms_until_end / args.ms_between_shots;
		args.rotation_between_shots = 0.f;

		//yeah gonna be alot of position changes
		args.direction_to_shoot = 0;
		args.speed_of_projectile = 0.35f;


		args.spawn_position = Vector_2D(0, 0);
		args.id = "screenleft_wipe";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 50);
		args.id = "screenleft_wipe51";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 100);
		args.id = "screenleft_wipe2";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 150);
		args.id = "screenleft_wipe3";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 200);
		args.id = "screenleft_wipe4";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 250);
		args.id = "screenleft_wipe5";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		/*args.spawn_position = Vector_2D(0, 300);
		args.id = "screenleft_wipe6";
		scene->add_game_object_to_scene(new Projectile_Turret(args));*/

		args.spawn_position = Vector_2D(0, 350);
		args.id = "screenleft_wipe7";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 400);
		args.id = "screenleft_wipe8";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 450);
		args.id = "screenleft_wipe9";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 500);
		args.id = "screenleft_wipe10";
		scene->add_game_object_to_scene(new Projectile_Turret(args));
	
		args.spawn_position = Vector_2D(0, 550);
		args.id = "screenleft_wipe11";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 600);
		args.id = "screenleft_wipe12";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 650);
		args.id = "screenleft_wipe13";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 700);
		args.id = "screenleft_wipe14";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 750);
		args.id = "screenleft_wipe15";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 800);
		args.id = "screenleft_wipe16";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		//next line 
		args.ms_between_shots = 3000;
		args.spawn_position = Vector_2D(0, 0);
		args.id = "slw";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 50);
		args.id = "slw1";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 100);
		args.id = "slw2";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 150);
		args.id = "slw3";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 200);
		args.id = "slw4";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 250);
		args.id = "slw5";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 300);
		args.id = "slw6";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 350);
		args.id = "slw7";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 400);
		args.id = "slw8";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 450);
		args.id = "slw9";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 500);
		args.id = "slw10";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 550);
		args.id = "slw11";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		//args.spawn_position = Vector_2D(0, 600);
		//args.id = "slw12";
		//scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 650);
		args.id = "slw13";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 700);
		args.id = "slw14";
		scene->add_game_object_to_scene(new Projectile_Turret(args));

		args.spawn_position = Vector_2D(0, 750);
		args.id = "slw15";
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