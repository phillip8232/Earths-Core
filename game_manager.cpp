#include "game_manager.h"
#include <iostream>
Game_Manager::Game_Manager()
{
	_lives = 1;
	_win = false;
}

void Game_Manager::update(Scene_manager* scene_manager)
{
	//i just reset scene so i kinda removed this
	/*if (_lives <= 0)
	{
		std::cout << "Yeah im on 0 lives";
		scene_manager->set_current_scene("Game_Over");
	}*/

	if (_win == true) 
	{
		scene_manager->set_current_scene("You_Win");
	}

}