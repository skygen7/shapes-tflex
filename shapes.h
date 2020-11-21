#ifndef SHAPES_H
#define SHAPES_H

#include <Windows.h>


class Picture {
public:
    void draw(HWND& hwnd, HDC& hdc, int x, int y);
};

#endif //SHAPES_H
