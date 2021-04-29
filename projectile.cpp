#pragma once


#include "projectile.h"

#include <string>

int Projectile::next_id = 0;

Projectile::Projectile()
	: Game_Object(std::string("Projectile") + std::to_string(Projectile::next_id++), "Texture.Collider")
{

}
Projectile::~Projectile()
{
}
void Projectile::simulate_AI(Uint32 milliseconds_to_simulate, Assets*, Input*)
{
	

}


