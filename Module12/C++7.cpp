#include<iostream>
using namespace std;

int power(int a, int b)
{
    if (a==0 and b!=0)
    {
        return 0;
    }
    if (a==1 or b==0)
    {
        return 1;
    }
    if (b==1)
    {
        return a;
    }

    int ans = a*power(a,b-1);

    return ans;
}

int main()
{
    cout << power(3,4);

}