#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cin >> n >> r;
    int fact_n = 1;
    for (int i=1;i<=n;i++)
    {
        fact_n=fact_n*i;
    }

    int fact_r=1;
    for (int i=1;i<=r;i++)
    {
        fact_r=fact_r*i;
    }

    int fact_nr=1;
    for (int i=1;i<=n-r;i++)
    {
        fact_nr=fact_nr*i;
    }

    cout << fact_n/(fact_r*fact_nr);  
}