#include <iostream>
using namespace std;
void reverse(int input[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}