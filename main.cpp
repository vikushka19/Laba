﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	//Вариант 1
	//Числовые типы данных
	short sh = 358;//2 байта, -2^15..2^15-1
	unsigned short sh1 = 123;//2 байта, 0..2^16-1
	int n = -7;//4 байта, -2^31...2^31-1
	unsigned int in1 = 7;//4 байт,0..2^32-1
	long long ll = 8969;//8 байт, -2^63..2^63-1
	unsigned long long ll1 = 34567;//8 байт,0...2^64-1
	double dbl = 48.89678;//15 значащих цифр
	float ft = 2.456;//7 значащих цифр

	//Написать программу,которая получает на вход целое значение радиуса круга.Посчитать площадь в новую переменную.
	unsigned int r;
	cout << "Введите радиус окружности: ";
	cin >> r;
	int R;
	R = r * r;
	float S = 3.14 * R;
	cout << "Площадь круга с радиусом "<<r<<" равна "<<S;
	return 0;
}
