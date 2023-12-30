#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x)
{
    if (size == 0)
    {
        return false;
    }

    if (input[0]==x)
    {
        return true;
    }

    bool smallOutput = checkNumber(input+1,size-1,x);
    return smallOutput;
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

    int x;
    cout << "enter no want to find = ";
    cin >> x;

    cout << checkNumber(a,n,x);

}