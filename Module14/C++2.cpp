// Merge Sort
#include <iostream>
using namespace std;

void mergeArray(int arr[],int s,int mid,int e)
{
    int temp[e-s+1];
    int a = s;
    int b = mid+1;
    int c = 0;

    while(a<=mid and b<=e)
    {
        if (arr[a]<arr[b])
        {
            temp[c]=arr[a];
            c=c+1;
            a=a+1;
        }
        else
        {
            temp[c]=arr[b];
            c=c+1;
            b=b+1;
        }
    }

    while(a<=mid)
    {
        temp[c]=arr[a];
        c=c+1;
        a=a+1;
    }

    while(b<=e)
    {
        temp[c]=arr[b];
        c=c+1;
        b=b+1;
    }

    // i=s
    // because the start index of array is s;
    // it may be not 0
    // temp[i-s] means start from 0 index;
    // as temp is a new array 

    for(int i=s;i<=e;i++)
    {
        arr[i]=temp[i-s];
    }
    return;
}

void merge1(int arr[],int s,int e)
{
    // base case
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;
    merge1(arr,s,mid);
    merge1(arr,mid+1,e);
    mergeArray(arr,s,mid,e);
}

void mergeSort(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    merge1(arr,start,end);
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

    mergeSort(a,n);

    for(int i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }
}