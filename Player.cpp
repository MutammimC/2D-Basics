#include "Player.h"
#include<cmath>
Player::Player()
{
	xPos = GetScreenWidth() / 2;
	yPos = GetScreenHeight() / 2;

	xDirectionVector = 0;
	yDirectionVector = 0;

	xPlayerDirection = 0;
	yPlayerDirection = 0;

	xPosUpdate = 7;
	yPosUpdate = 7;

}

void Player::checkScreenLimit()
{
	if (xPos >= xMax)
	{
		xPos = xMax - 1;
	}
	if (xPos < 0)
	{
		xPos = 0;
	}
	
	if (yPos >= yMax)
	{
		yPos = yMax - 1;
	}
	if (yPos < 0)
	{
		yPos = 0;
	}
}

void Player::unitVectorXY()
{
	//unit vector / normalized unit vector
	xDirectionVector = (GetMouseX() - xPos) / (std::sqrt((GetMouseX() - xPos) ^ 2 + (GetMouseY() - yPos) ^ 2));
	yDirectionVector = (GetMouseY() - yPos) / (std::sqrt((GetMouseX() - xPos) ^ 2 + (GetMouseY() - yPos) ^ 2));
	
	xPlayerDirection = xPos + xDirectionVector;
	yPlayerDirection = yPos + yDirectionVector;
}

void Player::Update()
{//for y 0 is the top left and down is max
 //for x 0 is also the top left and right is max
 //so think of y as inverted

	if (IsKeyDown(KEY_W))
	{
		yPos -= yPosUpdate;
	}
	if (IsKeyDown(KEY_D))
	{
		xPos += xPosUpdate;
	}
	if (IsKeyDown(KEY_S))
	{
		yPos += yPosUpdate;
	}
	if (IsKeyDown(KEY_A))
	{
		xPos -= xPosUpdate;
	}

	checkScreenLimit();
	unitVectorXY();

	DrawLine(xPos, yPos, xPlayerDirection, yPlayerDirection, WHITE);
	DrawRectangle(xPos, yPos, 10, 10, ORANGE);
}