#include "game_scene.h"
#include "dino.h"
#include "walking_dino.h"
#include "player.h"


//patterns
#include "pattern_manager.h"
#include "pattern_m1.h"
#include "pattern_m2.h"
#include "pattern_m3.h"
#include "pattern_m4.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{

	reset();

	
}

void Game_Scene::reset()
{
	_game_objects.clear();

	Game_Object* player = new Player("Player");
	_game_objects[player->id()] = player;

	//Game_Object* dino = new Dino("Dino");
	//_game_objects[dino->id()] = dino;



	// Survive 10 waves to win


	//WAVE1
	//gotta annouce the waves 
	add_game_object_to_scene(new Pattern_M1("1 ", 100, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M2("2 ", 200, 0, Vector_2D(0, 0)));

	add_game_object_to_scene(new Pattern_M1("3 ", 1000, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M2("4 ", 1200, 0, Vector_2D(0, 0)));

	add_game_object_to_scene(new Pattern_M1("5 ", 3000, 1000, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M2("6 ", 4000, 0, Vector_2D(0, 0)));

	add_game_object_to_scene(new Pattern_M3("7 ", 6000, 2000, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M4("8 ", 6000, 3000, Vector_2D(0, 0)));




	//WAVE2



	//WAVE3



	//WAVE4



	//WAVE5


	//WAVE6



	//WAVE7



	//WAVE8




	//WAVE9



	//WAVE10
	//this is the final wave annouce that and when they get past here they win

}

Game_Scene::~Game_Scene()
{
}

void Game_Scene::update(SDL_Window*)
{
	/*
	Game_Object* player = get_game_object("Player");

	int w, h;
	SDL_GetWindowSize(window, &w, &h);

	_camera_translation = Vector_2D(-w / 2.f + player->width() / 2.f, -h / 2.f + player->height() / 2.f) + player->translation();
	*/
}