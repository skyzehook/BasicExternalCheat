#include <windows.h>
#include <iostream>
#include "offsets.h"


// if you are looking at these codes, you are new to cheat coding
// Hope you improve :)

int main()
{

    int NewHealth = 500;


    HWND hwnd = FindWindowA(NULL, "GAME WINDOW NAME");
    if (!hwnd)
    {
        std::cout << "WINDOW = NULL\n" << std::endl;
    }

    DWORD pID;
    GetWindowThreadProcessId(hwnd, &pID);
    if (!pID)
    {
        std::cout << "PROCESS ID = NULL\n" << std::endl;
    }

    HANDLE gHANDLE = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
    if (!gHANDLE)
    {
        std::cout << "GAME HANDLE = NULL\n" << std::endl;
    }

    WriteProcessMemory(gHANDLE, health, &NewHealth, sizeof(NewHealth), 0);



}
