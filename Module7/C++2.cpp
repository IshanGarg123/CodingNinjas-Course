#include<iostream>
using namespace std;
void printArray(int input[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << input[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    printArray(arr,n);

}

