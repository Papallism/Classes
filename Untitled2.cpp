#include <iostream>
using namespace std;

class fraction{
	public:
		fraction();
		fraction(int, int);
		int numerator();
		int denominator();
		void assign(int n, int d);
		fraction add(fraction f);
		fraction divide(fraction, fraction);
		fraction mult(fraction, fraction);
		fraction dif(fraction, fraction);
	private:
		int num;
		int denom;
};

int main()
{
	fraction f, g(2,4);
	cout << f.numerator() << "/" << f.denominator() << endl;
	cout << g.numerator() << "/" << g.denominator() << endl;
	cout << endl;
	
return 0;
}

fraction::fraction()
{
	num = 0;
	denom = 1;
}

fraction::fraction(int x, int y)
{
	num = x;
	denom = y;
}

int fraction::numerator()
{
	return num;
}

int fraction::denominator()
{
	return denom;
}

void fraction::assign(int n, int d)
{
	num = n;
	denom = d;
}

fraction fraction::add(fraction f)
{
	fraction sum;
	sum.num = num * f.denom + f.num * denom;
	sum.denom = denom * f.denom;
	return sum;
} 

void fraction::divide(fraction x, fraction y)
{
	num = x.numerator() * y.denominator();
	denom = x.denominator() * y.numerator();
}

void fraction::mult(fraction x, fraction y)
{
	num = x.numerator() * y.numerator();
	denom = x.denominator() * y.denominator();
}

void fraction::dif(fraction x, fraction y)
{
	num = (x.numerator() * y.denominator()) - (y.numerator() * x.denominator());
	denom = (x.denominator() * y.denominator());
}




























