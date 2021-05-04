#include <iostream>
#include "scene_manager.h"

Scene_manager::Scene_manager()
{
	_current_scene = nullptr;
}


Scene* Scene_manager::current_scene()
{
	return _current_scene;
}

void Scene_manager::add_scene(Scene* scene)
{
	if ( _scenes.find(scene->id()) != _scenes.end())
	{
		std::cout << "attempted to add a scene that coflicts with another scene.";
		exit(1);
	}
	_scenes[scene->id()] = scene;
}

void Scene_manager::set_current_scene(std::string id)
{
	if (_scenes.find(id) == _scenes.end())
	{
		std::cout << "attempted to find an scene that was not added";
		exit(1);
	}

	_current_scene = _scenes.find(id)->second;

}
