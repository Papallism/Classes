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
    fraction sum1, sum2;
    fraction frac[4];
    frac[0].assign(3, 4);
	frac[1].assign(2, 5);
	frac[2].assign(1, 3);
	frac[3].assign(1, 4);
	sum1 = frac[0].add(frac[1]);
	cout << frac[0].numerator() << "/" << frac[0].denominator() << " + " << frac[1].numerator() << "/" << frac[1].denominator() << " = " << sum1.numerator() << "/" << sum1.denominator() << endl;
	sum2 = frac[2].add(frac[3]);
	cout << frac[2].numerator() << "/" << frac[2].denominator() << " + " << frac[3].numerator() << "/" << frac[3].denominator() << " = " << sum2.numerator() << "/" << sum2.denominator() << endl;

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

























