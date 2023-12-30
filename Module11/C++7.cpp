#include<iostream>
using namespace std;

// inline function
// work same as #define PI 3.14
inline int max(int a,int b)
{
    return (a>b) ? a : b;
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;

    // long methord

    int c;

    if (a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    cout << c << endl; 

    // short cut of if-else

    int d = (a>b) ? a : b ;
    cout << d << endl;

    // best methord function
    int e = max(a,b);
    cout << e;




}