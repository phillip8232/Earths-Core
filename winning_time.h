#pragma once

#include "game_object.h"

class Winning_Time : public Game_Object
{
public:
	Winning_Time(std::string id, int ms_until_start, int ms_until_end, Vector_2D spawn_position);
	~Winning_Time();

	virtual void simulate_AI(Uint32 milliseconds_to_simulate, Assets* assets, Input* input, Scene* scene, Game_Manager* game_manager) override;

private:
	int _ms_until_start;
	int _ms_until_end;
	bool _started;
};