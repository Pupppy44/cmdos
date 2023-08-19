#pragma once
class Cpu
{
public:
	bool init();
	bool start();
	void loop();
private:
private:
	bool initialized = false;
};

