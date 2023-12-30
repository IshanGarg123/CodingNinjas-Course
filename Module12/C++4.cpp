#include<iostream>
using namespace std;

int firstIndex(int arr[],int size, int x)
{
    if(size == 0)
    {
        return -1;
    }
    if(arr[0]==x)
    {
        return 0;
    }
    else
    {
        if(firstIndex(arr+1,size-1,x) ==  -1)
        {
            return -1;
        }
        else
        {
            return firstIndex(arr+1,size-1,x) + 1;
        }
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

    cout << firstIndex(a,n,x);

}