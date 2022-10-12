// Lab_03_1.cpp
// <Бихнюка Сергія>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.1

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;


	A = 1 / x + 4;

	if (x < 1)
		B = 0, 65 * x + 8;
	if (1 <= x && x < 5)
		B = atan ((x + 6, 1) / static_cast<double>(2) + exp(x));
	if (5 <= x)
		B = sqrt(1 + sqrt(x));

	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
}