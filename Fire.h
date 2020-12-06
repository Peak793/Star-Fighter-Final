#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>
#include "Bullet.h"
#include "Player.h"
#include "Ulti.h"
class Fire
{
public:
	std::vector<Bullet> bullets;
	std::vector<Ulti> ultis;
	bool canshoot = true;
	float cooldown = 0.2;
	float totalTime = 0;
	bool isUltiReady = false;
	bool isUltiPlaying = false;
	float ultiTimer = 0;
	float ultiCooldown = 5;
public:
	Fire();
	~Fire();

	void update(float dt,Player &player,sf::Texture &bullTex,sf::Texture &ultiTex);
	void render(sf::RenderTarget &target);
};

