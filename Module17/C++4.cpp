#include <iostream>
using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;

    public:
    Fraction()
    {

    }

    Fraction(int numerator, int denominator)
    {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    int getNumerator() const
    {
        return numerator;
    }

    int getDenominator() const
    {
        return denominator;
    }

    void setNumerator(int n)
    {
        numerator = n;
    }
    void setDenominator(int n)
    {
        denominator = n;
    }

    void print() const
    {
        cout << numerator << "/" << denominator << endl;
    }

    void simplify()
    {
        int gcd =1;
        int j = min(numerator,denominator);
        for(int i=1;i<=j;i++)
        {
            if (numerator % i == 0 and denominator % i == 0)
            {
                gcd =i;
            }
        }
        numerator = numerator/gcd;
        denominator = denominator/gcd;
    }
    
    // in this numerator is this -> numerator
    // denominator is this -> denominator
    void add(Fraction const &f2)
    {
        int lcm = denominator * f2.denominator;

        int num = (numerator*f2.denominator) + (denominator*f2.numerator);

        numerator = num;
        denominator = lcm;

        simplify();
        // this function will apply on f1;
    }

    void multiply(Fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        simplify();
    }
};

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction const f3(10,20);

    cout << f3.getNumerator() << " " << f3.getDenominator() << endl;
    f3.print();
}