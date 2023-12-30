#include <iostream>
using namespace std;

int Linear(int *a,int n,int x)
{
    for (int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    } 
    cout << Linear(a,n,5);
}