#pragma once

#include "scene_manager.h"
#include <iostream>

class Game_Manager
{
public:
	Game_Manager();

	void update(Scene_manager* scene);

	void lose_life() { _lives--;}
	void win() { _win++; }

private:
	int _lives;
	bool _win;
};