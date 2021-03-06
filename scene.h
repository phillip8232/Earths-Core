#pragma once

#include "vector_2D.h"

#include <map>
#include <string>
#include <vector>

#include <SDL.h>

class Game_Object;

class Scene
{
public:
	Scene(std::string id);
	~Scene();

	virtual void reset() = 0;

	virtual void update(SDL_Window* window) = 0;

	Game_Object* get_game_object(std::string id);
	std::vector<Game_Object*> get_game_objects();

	void add_game_object_to_scene(Game_Object* game_object);
	void remove_game_object_from_scene(std::string id){_game_objects.erase(id);}

	Vector_2D camera_translation();

	std::string id();

	Uint8 _red   = 80;
	Uint8 _green = 120;
	Uint8 _blue  = 170;

protected:
	std::map<std::string, Game_Object*> _game_objects;
	std::string                         _id;
	Vector_2D                           _camera_translation;

	
};