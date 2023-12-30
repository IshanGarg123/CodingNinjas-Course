#include<iostream>
using namespace std;

int sum(int *a,int size)
{
    int count =0;
    for(int i=0;i<size;i++)
    {
        count = count +a[i];
    }
    return count;
}

int main()
{
    int a[10] = {1,2,3};
    cout << sum(a,10) << endl;

    int b[10]={1,2,3,4,5,6,7,8,9,0};
    cout << sum(b+5,10) << endl;
    // it treated b[i] as b[i+5];
}