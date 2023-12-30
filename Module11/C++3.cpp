#include<iostream>
using namespace std;

int main()
{
    // dynamic memory allocation in heap memory

    int *p = new int ;
    *p = 10;

    cout << *p << endl;

    double* pd = new double;
    
    char* c = new char;

    // array in dynamic memory allocation 
    // in heap memory

    int *pa = new int[50];
    cout << pa << endl;


    int n;
    cout << "enter no of elements" << endl;
    cin >> n;
    int *pa2 = new int[n];

    for(int i=0;i<n;i++)
    {
        cin >> pa2[i];
    }
    
    int max = -1;
    for(int i=0;i<n;i++)
    {
        if(pa2[i]>max)
        {
            max=pa2[i];
        }
    }

    cout << max << endl;
}