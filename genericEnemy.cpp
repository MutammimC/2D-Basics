#include "genericEnemy.h"


int genericEnemy::getXEnemyCenter() const
{
	return (enemyWidth / 2) + xEnemyPos;
}
int genericEnemy::getYEnemyCenter() const
{
	return (enemyLength / 2) + yEnemyPos;
}


bool genericEnemy::checkCollision(Player& player)
{
	if (getXEnemyCenter() == player.getXPlayerCenter() && getYEnemyCenter() == player.getYPlayerCenter())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


genericEnemy::genericEnemy()
{
	health = 100;

	enemyLength = 25;
	enemyWidth = 25;

	enemySpeed = 10;
	
	xEnemyPos = 0;
	yEnemyPos = 0;

}

genericEnemy::genericEnemy(int length, int width, int speed)
{
	enemyLength = length;
	enemyWidth = width;
	
	enemySpeed = speed;
}

void genericEnemy::Update()
{

}