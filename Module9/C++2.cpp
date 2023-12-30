#include<iostream>
using namespace std;

int main()
{
    char input[100];
    cin.getline(input,100);
    // it will take upto 99 length string only;
    cout << input << endl;

    char input1[10];
    cin.getline(input1,4);
    // it will take upto 3 length string only;
    cout << input1 << endl;

    char input2[10];
    cin.getline(input2,10,'o');
    // it will stop taking input when get 'o';
    cout << input2 << endl;

}