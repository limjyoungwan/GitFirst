#include "Engine.h"
#include <stdio.h>
#include <Windows.h>
#include <conio.h>


void Engine::Run()
{
	while (1)
	{
		int keyCode = Input();
		Tick(keyCode);
		Draw();
	}
}

void Engine::Draw()
{
	system("cls");
	//for (int y = 0; y < 10; y++)
	//{
	//	for (int x = 0; x < 10; x++)
	//	{
	//		if (y == PlayerY && x == PlayerX)
	//		{
	//			printf("@");
	//		}
	//		else
	//		{
	//			printf("%d", map[y][x]);
	//		}
	//	}
	//	printf("\n");
	//}
}

void Engine::Tick(int keyCode)
{
	//switch (keyCode)
	//{
	//case RIGHT:
	//	//if(PlayerX < SIZE - 2)
	//	PlayerX++;
	//	break;
	//case Left:
	//	//if(PlayerX > 1)
	//	PlayerX--;
	//	break;
	//case UP:
	//	//if (PlayerY > 1)
	//	PlayerY--;
	//	break;
	//case DOWN:
	//	//if (PlayerY < SIZE - 2)
	//	PlayerY++;
	//	break;
	//case 'Q':
	//case 'q':
	//	bIsRunning = false;
	//	break;
	//}
	//PlayerX = Clamp(PlayerX, 1, 8);
	//PlayerY = Clamp(PlayerY, 1, 8);
}

int Engine::Input()
{
	int keyCode = getch();

	return keyCode;
	return 0;
}
