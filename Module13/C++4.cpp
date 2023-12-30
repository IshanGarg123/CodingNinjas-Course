#include <iostream>
using namespace std;
#include<cmath>

double geometricSum(int k)
{
    if(k==0)
    {
        return 1.0;
    }
    double smallOutput = geometricSum(k-1);
    return smallOutput + (1/pow(2,k));
}

int main()
{
    cout << geometricSum(3);

}