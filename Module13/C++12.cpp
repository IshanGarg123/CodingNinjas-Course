#include <iostream>
using namespace std;
#include<cstring>


int stringToNumber(char input[])
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
        int count=0;
        for(int i=0;i<len;i++)
        {
            count = count*10 + (input[i]-'0');
        }
        return count;
    }
}

int main()
{
    char a[10];
    cin >> a;
    int b=stringToNumber(a);
    cout << b;
}