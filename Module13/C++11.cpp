#include <iostream>
using namespace std;

void towerOfHanoi(int n,char source,char auxiliary,char destination)
{
    if(n<=0)
    {
        return;
    }
    if (n==1)
    {
        cout << source << " " << destination << endl;
        return;
    }
    
    // recursion to move plates
    towerOfHanoi(n-1,source,destination,auxiliary);
    towerOfHanoi(1,source,auxiliary,destination);

    // recursion going from n to 1 plate;
    towerOfHanoi(n-1,auxiliary,destination,source);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n,'a','b','c');
}