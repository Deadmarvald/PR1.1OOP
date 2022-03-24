#include <iostream>
#include "Pay.h"

using namespace std;

Pay MakePay(double f, int s)
{
	Pay n;
	if (!n.Init(f, s))
	{
		cerr << "wrong argument to Init" << endl;
	}
	return n;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	Pay a, b, c;

	a.Init(20000, 20);
	a.Display();

	cout << "�i���ic�� �i��i����� ������� ��i� = 15\t" << "���� ������ = " << a.Summa(15) << endl;
	cout << endl;

	b.Read();
	b.Display();
	
	cout << "�i���ic�� �i��i����� ������� ��i� = 12\t" << "���� ������ = " << b.Summa(12) << endl;
	cout << endl;

	int x, y;

	cout << "����� = "; cin >> x;
	cout << "�i���ic�� ������� ��i� = "; cin >> y;
	c = MakePay(x, y);
	c.Display();

	system("pause");
	return 0;
}