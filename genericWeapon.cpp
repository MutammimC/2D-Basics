
#include "genericWeapon.h"

void genericWeapon::setProjectileDamage(int Damage)
{
	projectileDamage = Damage;
}

int genericWeapon::getProjectileDamage() const
{
	return projectileDamage;
}

void genericWeapon::setProjectileSpeed(int speed)
{
	projectileSpeed = speed;
}

int genericWeapon::getProjectileSpeed() const
{
	return projectileSpeed;
}

void genericWeapon::checkCollision()
{
	//check Collision between enemy and bullet
}

void genericWeapon::shoot()
{

}


