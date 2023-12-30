#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int j =20;
    const int* p = &i;

    p = &j;
    // *p is constant 
    // p can be changed

    cout << *p << endl;

    // by syntax change

    int* const p2 = &i;
    (*p2)++;
    // now *p2 can be change
    // p2 is constant

    cout << *p2 << endl;

    const int* const p3 = &i;
    // in this p3 cant be changed
    // also *p3 cant be changed

}