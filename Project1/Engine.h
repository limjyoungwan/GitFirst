#pragma once

class Engine
{
public:
	void Run();
	void Draw();
	void Tick(int keyCode);
	int  Input();

	bool bIsRunning = true;
};