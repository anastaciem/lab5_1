// lab5_1.cpp
// < Демчук Анастасія >
// Лабораторна робота № 5.1
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень //
// Варіант 14
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b);

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = (h(t * t, 1) * h(t * t, 1) * h(t * t, 1) + h(1, t * s * s)) / (1 + h(s, t) * h(s, t));

	cout << "c = " << c << endl;

	return 0;
}

double h(const double a, const double b)
{
	return (a * a * sin(b) + b * b * cos(a));
}