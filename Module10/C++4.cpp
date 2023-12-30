#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int* p = &i;
    cout << p << endl;
    p=p+2;
    // in int* only;
    // it inc the value of address by 4 bytes if you add 1;
    // the No=n you add it inc address by (n*4)Bytes ;
    // if dec it reduce 4 byte per single number
    cout << p << endl;
    p=p-2;
    cout << p << endl;

    // in case of double the value change by 8 byte per Number;

    double d=123.34;
    double* p1 = &d;
    cout << p1 << endl;
    p1++;
    cout << p1 << endl;
}