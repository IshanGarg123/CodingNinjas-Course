#include <iostream>
using namespace std;
int main()
{
    int f;
    cout << "Enter Value of F= " << endl;
    cin>>f;
    int c=(5.0/9)*(f-32);
    c=(5*(f-32))/9;
    cout << c;

    int a,b;
    cin>>a;
    cin>>b;

    bool isEqual = (a==b); // it gives 0 or 1
    bool isGreater = (a>b);
    bool isLess =(b>a);
    cout << "Are They equal " << isEqual;
    cout << "is A greater " << isGreater;
    cout << "is A less " << isLess;

    bool third=isEqual && isGreater;
    bool fourth =isEqual || isGreater;

    cout << "Not Equal" << !isEqual << endl;


}