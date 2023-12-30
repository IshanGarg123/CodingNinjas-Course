#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int* p = &i;
    int *q = p;
    // pointer q is also pointing to i;

    cout << sizeof(p) << endl;

    cout << i << endl;
    cout << *p << endl;

    i++;

    cout << i << endl;
    cout << *p << endl;
    // change will happen is both 

    // if we make a new storage and store it;

    int a=*p;
    a++;
    cout << a << endl;
    cout << *p << endl;

    *p =20;
    cout << i << endl;
    cout << *p << endl;

    (*p)++;
    cout << i << endl;
    cout << *p << endl;


}