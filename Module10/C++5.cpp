#include<iostream>
using namespace std;
int main()
{
    int a[10];
    cout << a << endl;
    cout << &a << endl;
    cout << &a[0] << endl;

    a[0]=5;
    a[1]=10;
    cout << *a << endl;

    cout << a+1 << endl;
    cout << *(a+1) << endl;

    int* p = &a[0];
    cout << a << endl;
    cout << p << endl;


    // it give address of pointer
    cout << &p << endl;
    // it give address of array
    cout << &a << endl;

    // size of pointer
    cout << sizeof(p) << endl;
    // size of array
    cout << sizeof(a) << endl;

    // it is fine;
    p=p+1;
    // it give error
    // a=a+1; we cant mofify the value of a 
    // but we can store the modified value in another pointer

    int* p1 = a+3;
    // it is fine 
    cout << p1<< endl;
}