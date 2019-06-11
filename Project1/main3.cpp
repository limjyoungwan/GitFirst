#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define Left  75
#define RIGHT 77
#define UP    72
#define DOWN  80
#define ESC   27
#define SIZE  10

int PlayerX = 1;
int PlayerY = 1;

int map[SIZE][SIZE] = 
{
	{1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int Input();
void Tick(int keyCode);
void Draw();

int main()
{
	while (1)
	{		
		int keyCode = Input();
		Tick(keyCode);
		Draw();
		if (keyCode == ESC)
			break;
	}
}

int Input()
{
	int keyCode = getch();
    
	return keyCode;
}

void Tick(int keyCode)
{
	switch (keyCode)
	{
	case RIGHT:
		if(PlayerX < SIZE - 2)
		PlayerX++;
		break;
	case Left:
		if(PlayerX > 1)
		PlayerX--;
		break;
	case UP:
		if (PlayerY > 1)
		PlayerY--;
		break;
	case DOWN:
		if (PlayerY < SIZE - 2)
		PlayerY++;
		break;
	}	
}

void Draw()
{
	system("cls");
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (y == PlayerY && x == PlayerX)
			{
				printf("@");
			}
			else
			{
				printf("%d", map[y][x]);
			}			
		}
		printf("\n");
	}
}

/*
  init();
  input();
  update();
  draw();
*/
