#include "os.h"

bool Os::boot() {
    if (!cpu.init() || !fs.init() || !kernel.init()) {
        return false;
    };

    cpu.start();
    kernel.input();

    loop();
}

void Os::loop() {
    while (true) {
        cpu.loop();

        Sleep(1000 / fps);
    }
}