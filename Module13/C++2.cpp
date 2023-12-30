#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n)
{
    if(m==0 or n==0)
    {
        return 0;
    }

    int smallOutput = multiplyNumbers(m,n-1);
    return smallOutput + m;
}

int main()
{
    cout << multiplyNumbers(8,7);

}