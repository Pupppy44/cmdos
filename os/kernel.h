#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

class Kernel
{
public:
	bool init();
	void input();
private:
	HANDLE window;
};

