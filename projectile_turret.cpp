#pragma once


#include "projectile_turret.h"
#include "projectile.h"

Projectile_Turret::Projectile_Turret(std::string id, float direction_to_shoot, int number_of_shots, int ms_between_shots, int ms_until_next_shot)
	: Game_Object(id, "Texture.Collider"), _direction_to_shoot(direction_to_shoot)
{

	_translation = Vector_2D(200, 200);

	int _number_of_shots = number_of_shots;
	int _ms_between_shots = ms_between_shots;

	int _ms_until_next_shot = ms_until_next_shot;

	//_collider.set_radius(_width / 5.0f);
	//_collider.set_translation(Vector_2D(_width / 2.0f, (float)_height));
}
Projectile_Turret::~Projectile_Turret()
{
}
void Projectile_Turret::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*)
{
	_ms_until_next_shot -= milliseconds_to_simulate;
	bool should_shoot = _ms_until_next_shot <= 0;

	if (should_shoot)
	{
		Game_Object* projectile = new Projectile();
		projectile->set_translation(_translation);

		Vector_2D project_velocity = Vector_2D(_direction_to_shoot);
		project_velocity.scale(100);
		projectile->set_velocity(project_velocity);

		//scene is undefined 
		scene->add_game_object_to_scene(projectile);


		_ms_until_next_shot = _ms_between_shots;
		bool should_kill_self = _number_of_shots == 0;
		if (should_kill_self) 
		{
			// kill ourselves.
		}

		float angle = _direction_to_shoot.angle();

		_direction_to_shoot.rotate(15);
	}

}
