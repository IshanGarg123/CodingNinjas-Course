#include <iostream>
using namespace std;
#include<cstring>

void replacePi(char input[])
{
    int len = strlen(input);
    if(len<=1)
    {
        return;
    }

    if(input[0]=='p' and input[1]=='i')
    {
        for(int i=len;i>=2;i--)
        {
            input[i+2]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }

    replacePi(input+1);
}

int main()
{
    int n;
    cin >> n;
    char a[n];
    cin >> a;
    replacePi(a);
    cout << a;
}