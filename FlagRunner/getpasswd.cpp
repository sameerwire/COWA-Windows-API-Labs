#include <windows.h>
#include <iostream>

BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM)
{
    char title[512] = {};
    char className[256] = {};

    GetWindowTextA(hwnd, title, sizeof(title));
    GetClassNameA(hwnd, className, sizeof(className));

    std::cout << "  Child | Class: " << className
              << " | Title: " << title << std::endl;

    return TRUE;
}

BOOL CALLBACK EnumWindowProc(HWND hwnd, LPARAM)
{
    char title[512] = {};
    char className[256] = {};

    GetWindowTextA(hwnd, title, sizeof(title));
    GetClassNameA(hwnd, className, sizeof(className));

    std::cout << "Window | Class: " << className
              << " | Title: " << title << std::endl;

    EnumChildWindows(hwnd, EnumChildProc, 0);

    return TRUE;
}

int main()
{
    EnumWindows(EnumWindowProc, 0);
    return 0;
}