#pragma once

#include "scene.h"

class You_Win : public Scene
{
public:
	You_Win();
	~You_Win();

	void reset() override {};

	virtual void update(SDL_Window* window) override;
};