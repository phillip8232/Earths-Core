#pragma once

#include "scene.h"

class Game_Over_Scene : public Scene
{
public:
	Game_Over_Scene();
	~Game_Over_Scene();

	void reset() override {};

	virtual void update(SDL_Window* window) override;
};