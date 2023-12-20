#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double y;

	for (double x = -3; x <= 3; x += 0.25) {
		if (x > 2) {
			y = exp(x);
		}
		else if (x >= -2 && x <= 2) {
			y = x + 4;
		}
		else {
			y = 0;
		}
		cout << y << endl;
	}

	system("pause");
}
