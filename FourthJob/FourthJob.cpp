#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

double kordx(double, double, double);
double kordy(double, double, double);
double kordz(double, double, double);

int main()
{
	setlocale(LC_ALL, "Russian");

	double Sigma1;
	double Teta1;
	double Sigma2;
	double Teta2;
	double r;

	cout << "Введите Sigma1..." << endl;
	cin >> Sigma1;
	cout << "Введите Teta1..." << endl;
	cin >> Teta1;
	cout << "Введите Sigma2..." << endl;
	cin >> Sigma2;
	cout << "Введите Teta2..." << endl;
	cin >> Teta2;
	cout << "Введите r..." << endl;
	cin >> r;

	double xa = kordx(Sigma1, Teta1, r);
	double ya = kordy(Sigma1, Teta1, r);
	double za = kordz(Sigma1, Teta1, r);

	double xb = kordx(Sigma2, Teta2, r);
	double yb = kordy(Sigma2, Teta2, r);
	double zb = kordz(Sigma2, Teta2, r);

	double R = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2) + pow((zb - za), 2));

	cout << R << endl;
}

double kordx(double sigma, double teta, double r)
{
	double x;

	if (sigma < -3.14159265359)
	{
		sigma = 0;
	}
	else if (sigma > 3.14159265359)
	{
		sigma = 0;
	}

	if (abs(teta) > 3.14159265359) {
		teta = 0;
	}
	else {
		teta = abs(teta);
	}

	x = abs(r) * sin(teta) * cos(sigma);
	return x;
}
double kordy(double sigma, double teta, double r)
{
	double y;

	if (sigma < -3.14159265359)
	{
		sigma = 0;
	}
	else if (sigma > 3.14159265359)
	{
		sigma = 0;
	}

	if (abs(teta) > 3.14159265359) {
		teta = 0;
	}
	else {
		teta = abs(teta);
	}

	y = abs(r) * sin(teta) * sin(sigma);

	return y;
}

double kordz(double sigma, double teta, double r)
{
	double z;

	if (sigma < -3.14159265359)
	{
		sigma = 0;
	}
	else if (sigma > 3.14159265359)
	{
		sigma = 0;
	}

	if (abs(teta) > 3.14159265359) {
		teta = 0;
	}
	else {
		teta = abs(teta);
	}

	z = abs(r) * cos(teta);

	return z;
}
