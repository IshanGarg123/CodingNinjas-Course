#include <iostream>
using namespace std;

void removeX(char s[])
{
    // base case
    if(s[0]=='\0')
    {
        return;
    }

    if(s[0]!='x')
    {
        removeX(s+1);
    }
    else
    {
        int i=1;
        for(i=1;s[i]!='\0';i++)
        {
            s[i-1]=s[i];
        }
        // char array move 1 more time
        // than int array
        // as we have to shift the null char also

        s[i-1]=s[i];
        // as we remove X so len of string is dec 
        // by one so we take (s) not (s+1);
        // it is like(s,size-1);
        removeX(s);
    }
}

int length(char s[])
{
    // base case
    if(s[0]=='\0')
    {
        return 0;
    }

    int smallOutput = length(s+1);
    return smallOutput + 1;
}

int main()
{
    char a[100];
    cin >> a;
    cout << length(a) << endl;
    removeX(a);
    cout << a << endl;
}