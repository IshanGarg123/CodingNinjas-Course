#include<iostream>
using namespace std;

int allIndex(int *arr,int size,int x, int *output)
{
    if(size==0)
    {
        return 0;
    }

    int smalloutput = allIndex(arr,size-1,x,output);
    if(arr[size-1]==x)
    {
        output[smalloutput]=size-1;
        smalloutput++;
    }
    return smalloutput;
}

int main()
{
    int n;
    cout << "enter length of array" << endl;
    cin >> n;
    int a[n];

    cout << "enter array elements" << endl;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "enter elements to find" << endl;

    int x;
    cin >> x;

    int output[10];

    int ans = allIndex(a,n,x,output);

    cout << "ans = " << ans << endl;

    cout << "index are" << endl;

    for(int i=0;i<ans;i++)
    {
        cout << output[i] << " ";
    }
}