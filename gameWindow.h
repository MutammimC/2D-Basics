#pragma once
#include "raylib.h"

class gameWindow
{
private:
	int width;
	int height;

	int FPS;
public:
	gameWindow();

	void setWidth(int);
	int getWidth() const;

	void setHeight(int);
	int getHeight() const;

	void setFPS(int);
	int getFPS() const;

	void confirmConfig() { InitWindow(width, height, "The Improver"); }


};