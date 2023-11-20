#pragma once
#include<cstdlib>
#include "Player.h"

class genericEnemy
{
private:
	int health;

	int enemyLength;
	int enemyWidth;

	int enemySpeed;

	int xEnemyPos;
	int yEnemyPos;

public:

	int getXEnemyCenter() const;
	int getYEnemyCenter() const;

	bool checkCollision(Player& player);

	genericEnemy();
	genericEnemy(int length, int width, int speed);

	void Update();
};