#include "raylib.h"
#include<vector>

class Player
{
private:
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
	void checkScreenLimit();
	void unitVectorXY();
	void Update();
};