#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

#include "fs.h"
#include "cpu.h"
#include "kernel.h"

class Os
{
public:
	bool boot();
	void loop();
private:
	Fs fs;
	Cpu cpu;
	Kernel kernel;
private:
	int fps = 60;
};

