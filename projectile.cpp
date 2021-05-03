#pragma once

#include "projectile.h"

#include <string>
#include <iostream>

int Projectile::next_id = 0;

Projectile::Projectile(Vector_2D spawn_position)
	: Game_Object(std::string("Projectile") + std::to_string(Projectile::next_id++), "Texture.Collider"), _spawn_position(spawn_position)
{
	_width = 30;
	_height = 30;

	_translation = spawn_position;

	_collider.set_radius(_width / 5.0f);
	_collider.set_translation(Vector_2D(_width / 2.0f, (float)_height));
}
Projectile::~Projectile()
{
}
void Projectile::simulate_AI(Uint32, Assets*, Input*, Scene*)
{
	bool should_destroy = (_translation - _spawn_position).magnitude() > 1000;
	if(should_destroy) this->_is_dirty = true;

	// TODO: When we are out of the range of the map, we should kill ourselves!
}


