#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1=n/2+1;
    int n2=n/2;
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n1-i;j++)
        {
            cout << " ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

     for(int i=1;i<=n2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << " ";
        }
        for(int k=1;k<=2*(n2-i)+1;k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}