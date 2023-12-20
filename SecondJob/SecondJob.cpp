#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double x;
	double a;
	double b;
	long double f2;
	long double f;
	string ff;
	string fs;

	cout << "Ââåäèòå X... \n";
	cin >> x;
	cout << "Ââåäèòå A... \n";
	cin >> a;
	cout << "Ââåäèòå B... \n";
	cin >> b;

	if (x > 0 && x <= 1) {
		string f1 = "0 < x <= 1 | f = miel = ";
		double miel = (x - a) / (x);
		if (miel > (sqrt(a) + x) || miel > sin(x)) {
			miel = (sqrt(a) + x);
			if (miel > sin(x)) {
				miel = sin(x);
			}
		}
		f2 = miel;
		ff = f1;
	}
	else if (x > 1) {
		string f1 = "x > 1 | f = mael = ";
		double mael = sqrt(x);
		if (mael < a * x) {
			mael = a * x;
		}
		f2 = mael;
		ff = f1;
	}
	else if (x <= 0) {
		string f1 = "x <= 0 | f = ax + b = ";
		double el = a * x + b;
		f2 = el;
		ff = f1;
	}
	f = f2;
	fs = ff;

	cout << ff;
	cout << f2 << endl;

	system("pause");
}