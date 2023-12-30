#include<iostream>
using namespace std;

// it is req to enter the value of no of col in the 2D Array;
void printArray(int a[][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[10][10];
    int m,n;
    cin >> m;
    cin >> n;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }

    printArray(a,m,n);

    // initialize by declaration

    int a1[3]={1,2,3};

    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    

}