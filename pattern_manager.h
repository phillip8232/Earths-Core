#pragma once

#include "game_object.h"

class Pattern_Manager : public Game_Object
{
public:
	Pattern_Manager(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position);
	~Pattern_Manager();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input, Scene* scene) override;

private:
	int _ms_until_start;
	int _ms_until_end;
	bool _started;
};