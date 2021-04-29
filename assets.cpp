#include "assets.h"
#include "texture.h"
#include "animated_texture.h"

#include <iostream>

Assets::Assets(SDL_Renderer* renderer)
{
	// Cache Dino Texture.
	{
		Texture* texture = new Texture("Texture.Dino", "Assets/dino.png", renderer);
		_assets[texture->id()] = texture;
	}
	
	// Cache Dino Walking Texture.
	{
		const int frame_count                    = 10;
		const Uint32 frame_duration_milliseconds = 100;
		Animated_Texture* texture   = new Animated_Texture(
			"Texture.Dino.Walking",
			"Assets/dino.walking.png", 
			renderer,
			frame_count, 
			frame_duration_milliseconds);
		_assets[texture->id()] = texture;
	}

	// Create player walking texture.
	{
		const int frame_count = 10;
		const Uint32 frame_duration_milliseconds = 100;
		Asset* player_animated_texture = new Animated_Texture("Texture.Player.Walking","Assets/player.walking.png", renderer, frame_count, frame_duration_milliseconds);
		_assets[player_animated_texture->id()] = player_animated_texture;
	}

	// Create player running texture.
	{
		const int frame_count = 10;
		const Uint32 frame_duration_milliseconds = 100;
		Asset* player_animated_texture = new Animated_Texture("Texture.Player.Running", "Assets/player.running.png", renderer, frame_count, frame_duration_milliseconds);
		_assets[player_animated_texture->id()] = player_animated_texture;
	}

	// Create player idle texture.
	{
		const int frame_count = 10;
		const Uint32 frame_duration_milliseconds = 10000; // idle animation
		Asset* player_animated_texture = new Animated_Texture("Texture.Player.Idle", "Assets/player.idle.png", renderer, frame_count, frame_duration_milliseconds);
		_assets[player_animated_texture->id()] = player_animated_texture;
	}

	// Create collider texture
	{
		Texture* texture = new Texture("Texture.Collider", "Assets/collider.png", renderer);
		_assets[texture->id()] = texture;
	}
	
}

Assets::~Assets()
{

}

Asset* Assets::get_asset(std::string id)
{
	if(_assets.find(id) == _assets.end())
	{
		std::cout << "Attempted to find an asset that was not loaded. ID: " << id << std::endl;
		exit(1);
	}

	return _assets[id];
}