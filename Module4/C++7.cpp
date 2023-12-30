#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout << " ";
        }
        for(int k=1;k<=i;k++)
        {
            cout << k+i-1;
        }
        for(int k=1;k<=i-1;k++)
        {
            cout << 2*i-k-1;
        }

        cout << "\n";
    }
}