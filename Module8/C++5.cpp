#include<iostream>
using namespace std;

void merge(int *arr1 , int *arr2 , int n , int m , int *ans)
{
    int a=0; int b=0;
    while(a<n and b<m)
    {
        if(arr1[a]>arr2[b])
        {
            ans[a+b]=arr2[b];
            b=b+1;
        }
        else
        {
            ans[a+b]=arr1[a];
            a=a+1;
        }
    }
    while(b<m)
    {
        ans[a+b]=arr2[b];
        b=b+1;
    }
    while(a<n)
    {
        ans[a+b] = arr1[a];
        a=a+1;
    }
}

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    int arr1[m];
    int arr2[n];
    int ans[m+n];

    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin >> arr2[i];
    }

    merge(arr1,arr2,n,m,ans);
    for(int i=0;i<n+m;i++)
    {
        cout << ans[i] << " ";
    }


}