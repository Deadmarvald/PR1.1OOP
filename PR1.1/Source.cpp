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

	cout << "кiлькicть вiдвiданих робочих днiв = 15\t" << "сума окладу = " << a.Summa(15) << endl;
	cout << endl;

	b.Read();
	b.Display();
	
	cout << "кiлькicть вiдвiданих робочих днiв = 12\t" << "сума окладу = " << b.Summa(12) << endl;
	cout << endl;

	int x, y;

	cout << "оклад = "; cin >> x;
	cout << "кiлькicть робочих днiв = "; cin >> y;
	c = MakePay(x, y);
	c.Display();

	system("pause");
	return 0;
}