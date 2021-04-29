#include "game_scene.h"
#include "dino.h"
#include "walking_dino.h"
#include "player.h"
#include "portal_entry.h"
#include "portal_exit.h"
#include "pattern_manager.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{
	/*
	Game_Object* dino = new Dino("Dino");
	_game_objects[dino->id()] = dino;

	Game_Object* dino_walking = new Walking_Dino("Dino.Walking");
	_game_objects[dino_walking->id()] = dino_walking;

	Game_Object* player = new Player("Player");
	_game_objects[player->id()] = player;

	Game_Object* portal_entry = new Portal_Entry();
	_game_objects[portal_entry->id()] = portal_entry;

	Game_Object* portal_exit = new Portal_Exit();
	_game_objects[portal_exit->id()] = portal_exit;
	*/

	add_game_object_to_scene(new Pattern_Manager("Patter_Manager0", 1000, 4000, Vector_2D(400, 400)));
	add_game_object_to_scene(new Pattern_Manager("Patter_Manager1", 5000, 4000, Vector_2D(100, 100)));
	add_game_object_to_scene(new Pattern_Manager("Patter_Manager2", 6000, 6000, Vector_2D(600, 600)));
	add_game_object_to_scene(new Pattern_Manager("Patter_Manager3", 7000, 3000, Vector_2D(100, 400)));
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