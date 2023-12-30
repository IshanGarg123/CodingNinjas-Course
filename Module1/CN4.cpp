#include <iostream>
using namespace std;
int main() 
{
    int a;
    char c;
    a=100;
    c=a;
    cout << c << endl; // it give d

    c='y';
    a=c;
    cout << a << endl; // it give 121

    float f=1.2;
    a=f;
    cout << a << endl; // it give 1

}