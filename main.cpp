#include "raylib.h"
#include "gameWindow.h"
#include "Player.h"
#include<iostream>

using namespace std;

int main()
{
	gameWindow windowConfig;
	Player Player1;

	do
	{
		BeginDrawing();
		
		Player1.Update();
		
		
		ClearBackground(BLACK);
		EndDrawing();
	} while (!WindowShouldClose());
	CloseWindow();


	return 0;
}