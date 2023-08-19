#include "fs.h"

bool Fs::init() {
	std::string txt;

	std::string str(std::istreambuf_iterator<char>(std::ifstream("hdd").rdbuf()), std::istreambuf_iterator<char>());
	
	std::cout << str;

	return true;
}

std::string read(const char* _name) {
	return "Text file";
}