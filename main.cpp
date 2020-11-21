#include <iostream>
#include "shapes.h"

using namespace std;

void main() {
	Picture picture;
	picture.background();
	picture.draw(0, 0);  // смещение по x, y
	picture.draw(410, -50);

	cin.get();
}
