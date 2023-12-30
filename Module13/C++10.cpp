#include <iostream>
using namespace std;
#include<cstring>

void pairStar(char input[]) 
{
    // base case
    int len = strlen(input);
    if(len<=1)
    {
        return;
    }
    if(input[0]!=input[1])
    {
        pairStar(input+1);
    }
    else
    {
        for(int i=len;i>=1;i--)
        {
            input[i+1]=input[i];
        }
        input[1]='*';
        pairStar(input+2);
    }
}

int main()
{
    char a[10];
    cin >> a;
    pairStar(a);
    cout << a;

}