#include "Pay.h"
#include <iostream>

using namespace std;

void Pay::SetFirst(double value)
{
	first = value;
}

void Pay::SetSecond(int value)
{
	second = value;
}

bool Pay::Init(double f, int s)
{
	if (f >= 0 && s >= 0)
	{
		first = f;
		second = s;
		return true;
	}
	else
	{
		first = 0;
		second = 0;
		return false;
	}
}

void Pay::Display()const
{
	cout << "оклад = " << first << "\t кiлькicть робочих днiв = " << second << endl;
}

void Pay::Read()
{
	int f, s;
	do {
		cout << "оклад = "; cin >> f;
		cout << "кiлькicть робочих днiв = "; cin >> s;
	} while (!Init(f, s));
}

double Pay::Summa(int s)
{
	return first / second * s;
}