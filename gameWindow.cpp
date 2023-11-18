#include "gameWindow.h"

gameWindow::gameWindow()
{
	//SetConfigFlags(FLAG_WINDOW_UNDECORATED);
	width = 1920;
	height = 1080;
	
	FPS = 60;
	SetTargetFPS(FPS);

	SetWindowPosition(width / 2, height / 2);
	InitWindow(width, height, "The Improver");
	

}



void gameWindow::setHeight(int inputH)
{
	height = inputH;
}

int gameWindow::getHeight() const
{
	return height;
}

void gameWindow::setWidth(int inputW)
{
	height = inputW;
}

int gameWindow::getWidth() const
{
	return width;
}

void gameWindow::setFPS(int inputF)
{
	FPS = inputF;
}

int gameWindow::getFPS() const
{
	return FPS;
}