#include "game_scene.h"
#include "dino.h"
#include "walking_dino.h"
#include "player.h"
#include <iostream>

//patterns
#include "pattern_manager.h"
#include "pattern_m1.h"
#include "pattern_m2.h"
#include "pattern_m3.h"
#include "pattern_m4.h"
#include "pattern_m5.h"

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

	// Survive 10 waves to win


	//WAVE1

	//gotta annouce the waves <- I have not completed this sorry I was working on making the levels playable at least


	add_game_object_to_scene(new Pattern_M5("1 ", 100, 0, Vector_2D(0, 0))); //0.1 second into the game we start the game
	add_game_object_to_scene(new Pattern_M5("2 ", 3100, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M5("3 ", 6100, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M5("4 ", 9100, 0, Vector_2D(0, 0)));

	add_game_object_to_scene(new Pattern_M1("5 ", 15000, 0, Vector_2D(0, 0))); 
	add_game_object_to_scene(new Pattern_M2("6 ", 15100, 0, Vector_2D(0, 0)));

	add_game_object_to_scene(new Pattern_M1("7 ", 16000, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M2("8 ", 16200, 0, Vector_2D(0, 0))); // 16 seconds into the game

	add_game_object_to_scene(new Pattern_M1("9 ", 19000, 1000, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M2("10 ", 20000, 0, Vector_2D(0, 0)));

	add_game_object_to_scene(new Pattern_M3("11 ", 23000, 6000, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M4("12 ", 26000, 5000, Vector_2D(0, 0))); //around 30 sec mark is when this wave finishes

	add_game_object_to_scene(new Pattern_M5("13 ", 34100, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M5("14 ", 37100, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M5("15 ", 39100, 0, Vector_2D(0, 0)));
	add_game_object_to_scene(new Pattern_M5("16 ", 42000, 0, Vector_2D(0, 0))); //42 seconds into the game is when this wave is finished
	

	//WAVE2



	//WAVE3



	//WAVE4



	//WAVE5


	//WAVE6



	//WAVE7



	//WAVE8




	//WAVE9



	//WAVE10 THE FINAL WAVE
	

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