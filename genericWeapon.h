#pragma once
#include <string>
class genericWeapon
{
protected:
	std::string weaponName;

	int xProjectile;
	int yProjectile;

	int projectileDamage;
	int projectileSpeed;
	int projectileSpread;
public:
	void setProjectileDamage(int damage);
	int getProjectileDamage() const;
	 
	void setProjectileSpeed(int speed);
	int getProjectileSpeed() const;
	
	void checkCollision();
	void shoot();
};

class circleShooter : public genericWeapon
{
public:
	circleShooter() { projectileDamage = 5; projectileSpeed = 7; }
};
