#include "cpu.h"

bool Cpu::init() {
	initialized = true;
	return true;
}

bool Cpu::start() {
	if (!initialized) {
		return false;
	}

	return true;
}

void Cpu::loop() {

}