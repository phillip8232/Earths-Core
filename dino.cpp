#pragma once

#include "dino.h"

#include <iostream>

Dino::Dino(std::string id)
	: Game_Object(id, "Texture.Square")
{
	// _x = 50;
	// _y = 50;
	_translation = Vector_2D(50, 50);

	_collider.set_radius(_width / 5.0f);
	_collider.set_translation(Vector_2D(_width / 2.0f, (float)_height));
}
Dino::~Dino()
{
}
void Dino::simulate_AI(Uint32, Assets*, Input*, Scene*)
{
	int x, y;
	SDL_GetMouseState(&x, &y);

	Vector_2D mouse_pos = Vector_2D((float)x, (float)y);
	if((mouse_pos - _translation).magnitude() < 50)
	{
		
	}

	bool mouse_between_x = mouse_pos.x() > _translation.x() && 
		mouse_pos.x() < _translation.x() + _width;
	bool mouse_between_y = mouse_pos.y() > + _translation.y() &&
		mouse_pos.y() < + _translation.y() + _height;

	if(mouse_between_x && mouse_between_y)
	{
	std::cout << "MOUSE ON ME" << std::endl;
	}

}
