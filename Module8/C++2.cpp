#include<iostream>
using namespace std;
void selectionSort(int input[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        int min=input[i];
        int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(input[j]<min)
            {
                min=input[j];
                k=j;
            }
        }

        int temp=input[i];
        input[i]=min;
        input[k]=temp;
    }
}


int main()
{
    int n;
    cin >> n;

    int input[100];
    for (int i=0;i<n;i++)
    {
        cin>> input[i];
    }
    selectionSort(input,n);
    for (int i=0;i<n;i++)
    {
        cout << input[i] <<" ";
    }

}