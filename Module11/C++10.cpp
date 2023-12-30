#include<iostream>
using namespace std;

void g(const int &a)
{
    //a++;
    // it cant be changed
    // as it is declare constant 
}

void f(const int* p){
    //(*p)++;
    // it cant be changed
    // as it is declare constant
}


int main()
{
    int const i=10;

    int const *p =&i;
    
    int j =12;

    int * p3 = &j; 
    f(p3);
    g(j);

    int const *p2 = &j;
    cout << *p2 << endl;
    j++;
    cout << *p2 << endl;
}

