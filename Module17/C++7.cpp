#include <iostream>
using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int numerator, int denominator)
    {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    void print()
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
                gcd = i;
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

    // add function in which we want the 
    // should is given in a new fraction 
    // it should return a new fraction
    // Fraction f3 = f1.add(f2);

    Fraction add1(Fraction const &f2)
    {
        int num = numerator*f2.denominator + denominator*f2.numerator;
        int lcm = denominator*f2.denominator;

        Fraction f3(num,lcm);
        f3.simplify();

        return f3;
    }

    // in this the input is 
    // Fraction f4 = f1 + f2;
    // plus operator is defined for class


    Fraction operator+(Fraction const &f2) const
    {
        int num = numerator*f2.denominator + denominator*f2.numerator;
        int lcm = denominator*f2.denominator;

        Fraction f3(num,lcm);
        f3.simplify();
        return f3;
    }

    void multiply(Fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        simplify();
    }

    Fraction operator*(Fraction const &f2) const
    {
        int num = numerator*f2.numerator;
        int lcm = denominator*f2.denominator;

        Fraction f3(num,lcm);
        f3.simplify();
        return f3;
    }

    bool operator==(Fraction const &f2) const
    {
        if (numerator == f2.numerator and denominator == f2.denominator)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // pre increment
    Fraction& operator++()
    {
        numerator = numerator + denominator;
        simplify();

        return *this;
    }

    // post-increment
    Fraction operator++(int)
    {
        Fraction fNew(numerator,denominator);
        numerator = numerator + denominator;
        simplify();
        fNew.simplify();
        return fNew;
    }

    
};

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.print();
    //++f1;
    //f1.print();

    Fraction f3 = ++f1;
    f1.print();
    f3.print();

    Fraction f4 = ++(++f1);
    f1.print();
    f4.print();

    Fraction f5(10,2);
    Fraction f6(15,4);

    Fraction f7 = f5++;
    f7.print();
    f5.print();

}


