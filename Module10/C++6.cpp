#include<iostream>
using namespace std;
int main()
{

    // initialize
    char str[]="abcdefg";
    // in first a memory is located for us
    // it is a fine methord of declaration;
    char* ptr="abcdefg";
    // in this no memory is allocated to us 
    // it points to someone memory;
    // we should use this it create problems;

    int a[3]={1,2,3};
    char c[4]="abc";
    // print the address of array
    cout << a << endl;
    // print the string 
    cout << c << endl;

    char* p = &c[0];
    // char* give the value;
    // it not store the address;
    cout << p << endl;
    // it give abc;

    char c1='a';
    char* p1 = &c1;
    cout << c1 << endl;
    cout << p1 << endl;
    // it give c1 value + some garbage value until it not get '\0';

}