#include <iostream>
using namespace std;
#include<cstring>


void stringToNumber(char input[])
{
    int len = strlen(input);
    if(input[0]=='0')
    {
        for(int i=0;i<=len-1;i++)
        {
            input[i]=input[i+1];
        }
        stringToNumber(input);
    }

    else
    {
        return;
    }
}

int main()
{
    char a[10];
    cin >> a;
    stringToNumber(a);
    cout << a;
}