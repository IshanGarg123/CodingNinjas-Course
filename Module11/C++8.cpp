#include<iostream>
using namespace std;

// default argument 
// it is on the right most argument only

int sum(int*a,int n,int start=0)
{
    int ans =0;
    for(int i=start;i<n;i++)
    {
        ans = ans + a[i];
    }
    return ans;
}

int sum2(int a,int b,int c=0,int d=0)
{
    return a+b+c+d;
}

int main()
{
    int a[5];
     for(int i=0;i<5;i++)
    {
        cin >> a[i];
    }

    cout << sum(a,5) << endl;
    cout << sum(a,5,2) << endl;
}