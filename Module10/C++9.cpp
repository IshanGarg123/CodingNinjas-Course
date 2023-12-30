#include<iostream>
using namespace std;

// it give no change
void increment1(int** p)
{
    p=p+1;
}

// it give change
void increment2(int** p)
{
    *p =*p +1;
}

// it give change
void increment3(int** p)
{
    **p = **p +1;
}


int main()
{
    int i=10;

    int* p = &i;

    int** p1 = &p;

    cout << p1 << endl;
    cout << &p << endl;

    cout << p << endl;
    cout << *p1 << endl;
    cout << &i << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p1 << endl;


}