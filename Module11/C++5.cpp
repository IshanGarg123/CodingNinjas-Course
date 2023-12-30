#include<iostream>
using namespace std;
#define PI 3.14

int main()
{
    // case 1
    int r;
    cin >> r;
    cout << 3.14*r*r << endl;
    // it create problem in long code
    // we have to change at every position


    // case 2
    float pi = 3.14;
    cout << pi*r*r << endl;
    // it create problem if we write
    // pi = pi + 1;
    // or my mistake we modify it 
    // it create a problem 

    // case 3
    cout << PI*r*r << endl;
    // best methord for constant storage

}