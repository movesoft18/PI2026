#include "CrtLib.h"
#include "windows.h"

namespace crt
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	void GotoXY(int x, int y)
	{
		COORD cp{ x, y };
		//cp.X = x;
		//cp.Y = y;
		SetConsoleCursorPosition(hStdOut, cp);
	}
	void SetTextColor(int color)
	{
		CONSOLE_SCREEN_BUFFER_INFO inf;
		color = color & 0b00001111; // 0x0f
		GetConsoleScreenBufferInfo(hStdOut, &inf);
		inf.wAttributes = inf.wAttributes & 0b11110000; // 0xF0;
		inf.wAttributes = inf.wAttributes | color;
		SetConsoleTextAttribute(hStdOut, inf.wAttributes);
	}
	void SetTextBackground(int color)
	{
		CONSOLE_SCREEN_BUFFER_INFO inf;
		color = color & 0b00001111;
		GetConsoleScreenBufferInfo(hStdOut, &inf);
		inf.wAttributes = inf.wAttributes & 0b00001111;
		inf.wAttributes = inf.wAttributes | (color << 4);
		SetConsoleTextAttribute(hStdOut, inf.wAttributes);
	}

	void SetCursorVisibility(bool visible)
	{
		CONSOLE_CURSOR_INFO structCursorInfo;
		GetConsoleCursorInfo(hStdOut, &structCursorInfo);
		structCursorInfo.bVisible = visible;
		SetConsoleCursorInfo(hStdOut, &structCursorInfo);
	}

	void HideCursor()
	{
		SetCursorVisibility(false);
	}
	void ShowCursor()
	{
		SetCursorVisibility(true);
	}
}