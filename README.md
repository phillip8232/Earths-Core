

# Earth-core

GitHub Link - [phillip8232/Earths-Core: SDL Game. (github.com)](https://github.com/phillip8232/Earths-Core)

### Table of Content

- [Summary](#summary)
 - [Engine System](#engine-system)
 - [Future Implementation / Completed / known Issues](#future-implementation)
 - [Gameplay snapshots / Assets / game audio](#gameplay-snapshots--assets--game-audio)

## Summary

Earth-core is a 2D game that uses, C++ with a mix of many SDL libraries to create a game.

#### What is the game about

People from mars Invade earth to steal resources, The people on Earth decide to build a protective layer above themselves while some protected the builders millions of years go by and earth’s outer crust is built and the fighters who have won the war against mars are trapped outside of earth they build a civilization outside the crust and call that earth the story is long forgotten about the real earth.

You, a sentient fruit are curious about everything and even your own existence has decided to go past the earth's crust and see what is below.

Fight earth's defense system that prevents intruders from invading.

#### How the idea came about

Earth's core was idea was from the hollow earth theory and I just wanted to create a bullet hell so I combined them both and now it's a bullet hell set in the hollow abyss of earth.

## Engine System

#### Configuration 

- window info, name, size

- Object Handling/Collision


- 2D circle colliders 

#### Editor 

- Debug info / player position & object collision.
- Event handler - handles users event

#### Asset

- Texture
- animation

#### Rendering

- Using SDL v2.0.14 library

## Future implementation

- Gunplay(**unimplemented**)
- Enemies (**unimplemented**)
- Powerup (**unimplemented**)

## Completed 

- Death / restart (**Implemented**)
- Winning if you survive the waves(**Implemented**)
- Projectile & player Collision (**Implemented**)
- Wave System / rounds (**Implemented**)

## Known Issues

- Lags when too many Game_object are on screen.
- Sometimes you can collide with projectiles without game resetting.(although I did give player a smaller hitbox so might not happen as often but can be replicated)
- It's Possible to abuse the out of bounds system.

## Gameplay snapshots / Assets / game audio

#### **Music** - Jeremy Blake - Powerup! ♫ NO COPYRIGHT 8-bit Music

### Assets

**IDLE**

![Idle](https://raw.githubusercontent.com/phillip8232/Earths-Core/master/Assets/player.idle.png)

**WALK**

![Walk](https://raw.githubusercontent.com/phillip8232/Earths-Core/master/Assets/player.walking.png)

**Projectiles**

<img src="https://raw.githubusercontent.com/phillip8232/Earths-Core/master/Assets/collider.png" width="100" height="100" />

**Winning Screen**

<img src="https://raw.githubusercontent.com/phillip8232/Earths-Core/master/Assets/Win.png" width="300" height="300" />


## Developer Info

Name : Phillip Lim

Player Tested: Phillip Lim

