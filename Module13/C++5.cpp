#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    int smallOutput = sumOfDigits(n/10);
    return smallOutput + n%10;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n);

}