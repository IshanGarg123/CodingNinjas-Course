#include<iostream>
using namespace std;
// global can be access by all fun 
// without taking it as input
int a;

void g()
{
    a++;
    cout << a << endl;
}

void f()
{
    cout << a << endl;
    a++;
    g();
}

int main()
{
    a=10;
    f();
    cout << a << endl;

}
