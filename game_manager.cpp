#include "game_manager.h"

Game_Manager::Game_Manager()
{
	_lives = 1;
}

void Game_Manager::update(Scene_manager* scene_manager)
{
	if (_lives <= 0)
	{
		scene_manager->set_current_scene("Game_Over");
	}

}