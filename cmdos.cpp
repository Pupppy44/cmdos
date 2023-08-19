#include <iostream>
#include <os.h>
#include <thread>

int main()
{
    Os os;
    if (!os.boot()) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xc);
        printf_s("Could not boot!");
    };
}