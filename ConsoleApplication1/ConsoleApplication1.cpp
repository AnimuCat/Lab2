#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <cmath>
#pragma warning(disable : 4996)

using namespace std;

//Сделал разные функции для заданий для удобства

//первое задание, линейный алгоритм
void Task1()
{
	double a, b;
	double result, result2;
	double F;

	cout << "Please, enter a and b \n";
	cin >> a >> b;

	result = a - b;
	result = pow(result, 2);
	result2 = sin(1 - (a / b));
	result2 = pow(result2, 2);
	F = result * result2;
	F *= (3.14 / 3);
	result = cos(1 - (b / a));
	result = pow(result, 2);
	F *= result;
	F *= (3.14 / 3);
	F = pow(F, 1 / 3.0);

	result = a - b;
	result = pow(result, 2);
	result = log(result);
	result *= 0.701;
	F = F / result;

	cout << "There's your result: " << F << endl;
}
//второе задание, ветвяющийся алгоритм
void Task2()
{
	float x, y, TargetY;

	printf("Please, enter x and y \n");
	scanf("%f%f", &x, &y);

	TargetY = sqrt(pow(2, 2) - pow(x, 2));
	TargetY = roundf(TargetY * 100) / 100.0;

	if (y == TargetY)
	{
		printf("Yes, your point is in range");
	}
	else
	{
		printf("No, your point is out of range");
	}
}
//третье - цикл
//Там есть нюанс, что в задании идёт деление на знаменатель.
//Знаменатель всегда будет 0 в первой итерации, отчего дальнейшее выполнение невозможно.
//скорее всего так и надо, но если это не так - поправьте меня пожалуйста
void Task3()
{
	double s, result = 1, E;
	int n = 1;
	cout << "Please, enter E \n";
	cin >> E;

	s = 0;

	while (result > E)
	{
		result = (n - 1) / (pow(2, n) - 1);
		s += result;
		n++;
	}

	printf("%lf", s);
}

int main()
{
	//Тело проги
	//Вводите номер задания и получаете нужную функцию
	int input;
	cout << "Please, choose task you want to see \n";
	cin >> input;

	while (input < 1 || input > 3)
		{
			cout << "Enter valid number of task (1,2 or 3) \n";
			cin >> input;
		}

	if (input == 1)
	{
		Task1();
	}
	else if (input == 2)
	{
		Task2();
	}
	else
	{
		Task3();
	}
	
	return 0;
}
