#include<iostream>
using namespace std;

// in this we use reference variable
// as the change happen in the real memory

// fun give error due to scope of variable

int & f(int n)
{
    int a = n;
    return a;
}

int * f2()
{
    int i=10;
    return &i;
}

// the above 2 fun give error

void increment(int &n)
{
    n++;
}

int main()
{
    int i=10;
    int j=i;
    i++;
    cout << j << endl;
    // the j is still remain 10

    int a=10;
    int &b =a;
    a++;
    cout << b << endl;
    b++;
    cout << a << endl;

    // now b is a reference variable 
    // as int & is the syntax of reference variable
    // now both both a and b is pointing to same 
    // memory means same addrees if you change one 
    // another also changes

    int k=100;
    b=k;
    cout << a << endl;
    increment(k);
    cout << k << endl;
}