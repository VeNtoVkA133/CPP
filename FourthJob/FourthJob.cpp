﻿#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double Sigma;
	double Teta;
	double r;
	double A;
	double B;

	cout << "Введите Sigma..." << endl;
	cin >> Sigma;
	cout << "Введите Teta..." << endl;
	cin >> Teta;
	cout << "Введите r..." << endl;
	cin >> r;
	cout << "Введите A..." << endl;
	cin >> A;
	cout << "Введите B..." << endl;
	cin >> B;

	double R = sqrt(pow((xb - xa),2) + pow((yb - ya),2) + pow((zb - za), 2))
}
double kord(double sigma, double teta, double r)
{
	double x;
	double y;
	double z;
	double r;
	
	if (sigma < -3.14159265359)
	{
		sigma = 0;
	} 
	else if (sigma > 3.14159265359)
	{
		sigma = 0;
	}

	x = abs(r) * sin(teta) * cos(sigma);
	y = abs(r) * sin(teta) * sin(sigma);
	z = abs(r) * cos(teta);

}