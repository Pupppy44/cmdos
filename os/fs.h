#pragma once
#include <iostream>
#include <fstream>
#include <string>
class Fs
{
public:
	bool init();

	void read();
private:
	const char* id;
};

