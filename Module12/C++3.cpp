#include<iostream>
using namespace std;

bool is_sorted2(int a[],int size)
{
        // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    bool isSmallSorted = is_sorted2(a+1,size-1);

    if (!isSmallSorted)
    {
        return false;
    }
    else
    {
        if(a[0]>a[1])
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}

bool is_sorted(int a[],int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    // condition check at every recursion
    if(a[0]>a[1])
    {
        return false;
    }
    // recursion
    // return value from small problem
    bool isSmallSorted = is_sorted(a+1,size-1);
    return isSmallSorted;    
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

    cout << is_sorted(a,n);

}