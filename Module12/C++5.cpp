#include<iostream>
using namespace std;

int lastIndex(int arr[], int size , int x)
{
    // base condition
    if(size == 0)
    {
        return -1;
    }

    int smalloutput = lastIndex(arr+1,size-1,x);

    if(smalloutput == -1)
    {
        if (arr[0]==x)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return smalloutput + 1;
    }

}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;

    cout << lastIndex(a,n,x);

}