#include<iostream>
using namespace std;

int main()
{
    // both syntax are correct
    const int i=10;
    int const i2=10;

    // const reference from a non const int
    int j=12;
    const int &k =j;
    cout << "k=" << k << endl;
    j++;
    cout << "k=" << k << endl;

    // in this way const var value can be change

    // const reference from a const int
    int const j2 = 12;
    int const &k2 = j2;

    // non const reference from a const int
    const int j3 = 123;
    //int &k3 = j3;
    // it give error

    




}