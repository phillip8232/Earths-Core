#pragma once

#include "scene.h"

#include <string>
#include <map>

class Scene_manager
{
public:
	Scene_manager();

	Scene* current_scene();

	void add_scene(Scene* scene);
	void set_current_scene(std::string id);
private:
	std::map<std::string, Scene*> _scenes;
	Scene* _current_scene;
};