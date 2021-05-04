#pragma once

#include "scene_manager.h"

class Game_Manager
{
public:
	Game_Manager();

	void update(Scene_manager* scene);

private:
	int _lives;
};