#pragma once

#include "projectile.h"
#include "player.h"

#include <string>
#include <iostream>

int Projectile::next_id = 0;

Projectile::Projectile(Vector_2D spawn_position)
	: Game_Object(std::string("Projectile") + std::to_string(Projectile::next_id++), "Texture.Collider"), _spawn_position(spawn_position)
{
	_width = 30;
	_height = 30;

	_translation = spawn_position;

	_collider.set_radius(_width / 10.0f);
	_collider.set_translation(Vector_2D(_width / 2.0f, (float)_height));
}
Projectile::~Projectile()
{
}
void Projectile::simulate_AI(Uint32, Assets*, Input*, Scene* scene,Game_Manager* game_manager)
{
	bool should_destroy = (_translation - _spawn_position).magnitude() > 1400;
	if(should_destroy) this->_is_dirty = true;


	//dying when getting hit by projectile

	Game_Object* player = scene->get_game_object("Player");

	Vector_2D projectile_center = _translation + Vector_2D((float)_width / 2, (float)_height / 2);

	Vector_2D player_center = player->translation() + Vector_2D((float)player->width() / 2, (float)player->height() / 2);

	float distance_to_player = (player_center - projectile_center).magnitude();

	if (distance_to_player < 30.0f)
	{
		//gotta reset game scene when hit
		
		
		//game_manager->lose_life();
		scene->reset();
	}
	
}


