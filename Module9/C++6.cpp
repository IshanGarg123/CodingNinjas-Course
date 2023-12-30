// 2D Arrays;
#include<iostream>
using namespace std;

int main()
{
    int a[100][100];
    int m;  // Rows
    cin >> m;
    int n;  // Cols
    cin >> n;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }

    //  Rowise printing
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // colwise printing
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



}