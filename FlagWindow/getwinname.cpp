#include <windows.h>
#include <iostream>

BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam)
{
    char className[256];
    char title[512];

    GetClassNameA(hwnd, className, sizeof(className));
    GetWindowTextA(hwnd, title, sizeof(title));

    std::cout << "Class: " << className
              << " | Title: " << title << std::endl;

    // Put the specific class-name check here
    // if (strcmp(className, "YOUR_CLASS_NAME") == 0) {
    //     std::cout << "FLAG: " << title << std::endl;
    //     return FALSE;
    // }

    return TRUE;
}

int main()
{
    EnumWindows(EnumWindowsProc, 0);
    return 0;
}