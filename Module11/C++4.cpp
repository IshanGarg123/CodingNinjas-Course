#include<iostream>
using namespace std;

int main()
{
    int *p1 = new int;
    delete p1;

    int *pa = new int[50];
    delete [] pa;

    // creating 2D arrays 
    // in dynamic memory

    int m,n;
    cout << "enter no of rows";
    cin >> m;
    cout << "enter no of cols";
    cin >> n;


    int**p = new int*[m];

    for(int i=0;i<m;i++)
    {
        p[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            cin >> p[i][j];
        }
    }

    // it is very imp 

    for (int i=0;i<m;i++)
    {
        delete [] p[i];
    }

    delete [] p ;
}