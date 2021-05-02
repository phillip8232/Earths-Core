#pragma once

#include "game_object.h"

class Pattern_M3 : public Game_Object
{
public:
	Pattern_M3(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position);
	~Pattern_M3();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input, Scene* scene) override;

private:
	int _ms_until_start;
	int _ms_until_end;
	bool _started;
};