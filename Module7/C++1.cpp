#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\n";
    }
    int large=-123456789;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout << large;
}
