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

void Player::playerDirectionVector()
{
	int playerMouseVectX = GetMouseX() - xPos;
	int playerMouseVectY = GetMouseY() - yPos;
	if (playerMouseVectX != 0 && playerMouseVectY != 0)
	{
		xDirectionVector = (playerMouseVectX / std::sqrt(std::pow(playerMouseVectX, 2) + std::pow(playerMouseVectY, 2)))*100 + xPos;
		yDirectionVector = (playerMouseVectY / std::sqrt(std::pow(playerMouseVectX, 2) + std::pow(playerMouseVectY, 2)))*100 + yPos;
	}



}


void Player::checkMovement()
{
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
}


void Player::Update()
{//for y 0 is the top left and down is max
 //for x 0 is also the top left and right is max
 //so think of y as inverted
	checkMovement();
	checkScreenLimit();
	playerDirectionVector();

	DrawLine(xPos, yPos, xDirectionVector, yDirectionVector, BLUE);
	DrawRectangle(xPos, yPos, 10, 10, ORANGE);
}