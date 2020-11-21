#include <Windows.h>


class Picture {

private:
	HWND hwnd = GetConsoleWindow();  // identifier console window
	HDC hdc = GetDC(hwnd);  // descriptor
	HBRUSH brush;

public:

	void background() {
		RECT clientRect;
		GetClientRect(hwnd, &clientRect);  // get coordinates console window
		FillRect(hdc, &clientRect, CreateSolidBrush(RGB(255, 255, 255)));  // backround color
	}

	void draw(const int x, const int y) {
		RECT walls = { 50 + x, 200 + y, 400 + x, 450 + y };
		FillRect(hdc, &walls, CreateSolidBrush(RGB(255, 51, 0)));

		POINT roof[3] = { {50 + x, 200 + y}, {225 + x, 50 + y}, {400 + x, 200 + y} };
		brush = CreateSolidBrush(RGB(0, 50, 0));
		SelectObject(hdc, brush);
		Polygon(hdc, roof, 3);
		DeleteObject(brush);

		RECT window = { 100 + x, 400 + y, 200 + x, 300 + y };
		FillRect(hdc, &window, CreateSolidBrush(RGB(255, 255, 0)));

		RECT door = { 300 + x, 445 + y, 375 + x, 300 + y };
		FillRect(hdc, &door, CreateSolidBrush(RGB(100, 50, 0)));

		brush = CreateSolidBrush(RGB(0, 0, 150));
		SelectObject(hdc, brush);
		Ellipse(hdc, 200 + x, 100 + y, 250 + x, 150 + y);  // top window


	}
};

