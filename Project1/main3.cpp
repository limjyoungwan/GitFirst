#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "Engine.h"
#include "Map.h"
#include "Util.h"

#define Left  75
#define RIGHT 77
#define UP    72
#define DOWN  80
#define ESC   27
#define SIZE  10


int main()
{
	Engine * engine = new Engine();
	engine->Run();
	delete engine;
	return 0;
}

/*
  init();
  input();
  update();
  draw();
*/
