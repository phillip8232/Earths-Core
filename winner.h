#pragma once

#include "game_object.h"

class Winner : public Game_Object
{
public:
	Winner(std::string id);
	~Winner();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input, Scene* scene, Game_Manager* game_manager) override;
};