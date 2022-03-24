#pragma once

class Pay
{
private:
	double first;
	int second;

public:
	double GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(int value);

	bool Init(double f, int s);
	void Display() const;
	void Read();

	double Summa(int s);
};