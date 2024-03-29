#include "raylib.h"
#include<vector>

class Player
{
private:
	int playerWidth;
	int playerHeight;

	int xPos;
	int yPos;


	const int xMax = GetScreenWidth() - 10;
	const int yMax = GetScreenHeight() - 10;

	int xPosUpdate;
	int yPosUpdate;

	//Direction Vectors for x and y position for character view direction
	float xDirectionVector;
	float yDirectionVector;

	int xPlayerDirection;
	int yPlayerDirection;

public:

	Player();

	int getXPlayerCenter() const;
	int getYPlayerCenter() const;

	void checkScreenLimit();

	void playerDirectionVector();

	void Update();

	void checkMovement();
};