#include<iostream>
using namespace std;

int count(int n)
{
    if(n==0)
    {
        return 0;   
    }

    int smallOutput = count(n/10);
    smallOutput++;
    return smallOutput;
}

int main()
{
    cout << count(156);

}