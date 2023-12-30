#include <iostream>
using namespace std;
int main()
{
    int var=10;
    int *ptr=&var;
    cout << var << "\n";
    cout << &var <<"\n"; // address of point

    *ptr=20;
    cout << var << "\n";
    cout << &var; // address of the point 

    return 0;
}