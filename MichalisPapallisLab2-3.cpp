//Michalis Papallis - Lab Exercise 2 & 3
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
		void divide(fraction, fraction);
		void mult(fraction, fraction);
		void dif(fraction, fraction);
		void reduce();
	private:
		int num;
		int denom;
};

int main()
{
	fraction f(1, 4), g(2, 4), h;
	cout << f.numerator() << "/" << f.denominator() << endl;
	cout << g.numerator() << "/" << g.denominator() << endl;
	cout << endl;
    h.divide(f, g);
    cout << h.numerator() << "/" << h.denominator() << endl;
    h.mult(f, g);
    cout << h.numerator() << "/" << h.denominator() << endl;
    h.dif(f, g);
    cout << h.numerator() << "/" << h.denominator() << endl;
    f = f.add(h);
    f = f.add(g);
    cout << f.numerator() << "/" << f.denominator() << endl;
    f.reduce();
    cout << f.numerator() << "/" << f.denominator() << endl;

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
	num = x.num * y.denom;
	denom = x.denom * y.num;
}

void fraction::mult(fraction x, fraction y)
{
	num = x.numerator() * y.numerator();
	denom = x.denominator() * y.denominator();
}

void fraction::dif(fraction x, fraction y)
{
    if(x.denom != y.denom)
    {

        num = (x.numerator() * y.denominator()) - (y.numerator() * x.denominator());
        denom = (x.denominator() * y.denominator());
    }
    else
    {
        num = x.num - y.num;
        denom = x.denom;
    }
}

void fraction::reduce()
{
    int p = num, q = denom;
    int r = num % denom;
    while(r != 0)
    {
        p = q;
        q = r;
        r = p % q;
    }
    num /= q;
    denom /= q;
}

























