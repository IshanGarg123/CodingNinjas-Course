#include<iostream>
using namespace std;

int main()
{
    int i=10;
    cout << &i << endl;
    int* p = &i;
    cout << p << endl;
    
    cout << *p << endl;

    float a=10.1;
    float* p1 = &a;
    cout << p1 << endl;

    double d=122.32;
    double* p2 = &d;

    cout << p1 <<endl;
    cout << p2 << endl;
}
