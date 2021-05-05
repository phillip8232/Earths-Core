#pragma once

#include "winner.h"

#include <iostream>

Winner::Winner(std::string id)
	: Game_Object(id, "Texture.Win")
{
	_width = 1600;
	_height = 800;
	_translation = Vector_2D(0, 0);

}
Winner::~Winner()
{
}
void Winner::simulate_AI(Uint32, Assets*, Input*, Scene* scene, Game_Manager* game_manager)
{

}
