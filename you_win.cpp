
#include "You_Win.h"
#include "winner.h"


You_Win::You_Win()
	: Scene("You_Win")
{
	
	Game_Object* winner = new Winner("Winner");
	_game_objects[winner->id()] = winner;
}

You_Win::~You_Win()
{
}

void You_Win::update(SDL_Window*)
{

}