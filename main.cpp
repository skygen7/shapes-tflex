#include <iostream>
#include "shapes.h"
#include <Windows.h>

using namespace std;

int main() {
    HWND hwnd = GetConsoleWindow();  // identifier console window
    HDC hdc = GetDC(hwnd);  // descriptor
    RECT clientRect;
    GetClientRect(hwnd, &clientRect);  // get coordinates console window
    FillRect(hdc, &clientRect, CreateSolidBrush(RGB(255, 255, 255)));  // background color

    Picture picture;
	picture.draw(hwnd, hdc, 0, 0);  // coordinates x, y
	picture.draw(hwnd, hdc, 410, -50);

	cin.get();
	return 0;
}
