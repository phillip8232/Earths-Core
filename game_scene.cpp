#include "game_scene.h"
#include "dino.h"
#include "walking_dino.h"
#include "player.h"
#include "projectile_turret.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{
	//Game_Object* dino = new Dino("Dino");
	//_game_objects[dino->id()] = dino;

	//Game_Object* dino_walking = new Walking_Dino("Dino.Walking");
	//_game_objects[dino_walking->id()] = dino_walking;

	Game_Object* turret = new Projectile_Turret("Projectile_turret", 0, 1000, 250,20);
	add_game_object_to_scene(turret);

	Game_Object* player = new Player("Player");
	_game_objects[player->id()] = player;

	
}

Game_Scene::~Game_Scene()
{
}

void Game_Scene::update(SDL_Window*)
{
}