#include<iostream>
using namespace std;

int main()
{
    int i;
    cout << i << endl;

    i++;
    cout << i << endl;

    int* p;
    cout << p << endl;
    cout << *p << endl;
    (*p)++;
    cout << *p << endl;

    // we want to declare a pointer the value
    // should be given to it 
    // if we have no value just put as NULL or 0;

    int* p1 = NULL; 
    int* p2 = 0;
    cout << p1 << endl;
    cout << *p1 << endl;
    (*p)++;
    cout << *p1 << endl;

}