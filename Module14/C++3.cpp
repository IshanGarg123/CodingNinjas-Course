// Quick Sort
#include <iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int a = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<a)
        {
            count++;
        }
    }

    int pivotIndex = count+s;

    arr[s]=arr[pivotIndex];
    arr[pivotIndex]=a;

    int i=s;
    int j=e;

    while(i<pivotIndex and j>pivotIndex)
    {
        while(arr[i]<a)
        {
            i++;
        }
        while(arr[j]>=a)
        {
            j--;
        }
        if(arr[i]>a and arr[j]<a)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            i++;
            j--;
        }
    }

    return pivotIndex;
}

void Quicksort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int pivot = partition(arr,s,e);
    Quicksort(arr,s,pivot-1);
    Quicksort(arr,pivot+1,e);
}

void quicksort(int arr[],int size)
{
    Quicksort(arr,0,size-1);
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

    quicksort(a,n);

    cout << "the sorted array is" << endl;

    for(int i=0;i<n;i++)
    {
        cout << a[i] << ' ';
    }
}