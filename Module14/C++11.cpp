#include <iostream>
using namespace std;
#include<cstring>

void removeConsecutiveDuplicates(char *input) 
{
    int len = strlen(input);

    // base case
    if(len==0)
    {
        return;
    }

    if(input[0]==input[1])
    {
        for(int i=0;i<len;i++)
        {
            input[i]=input[i+1];
        }
        removeConsecutiveDuplicates(input);
    }
    else
    {
        removeConsecutiveDuplicates(input+1);
    }
}

int main()
{
    char input[10];
    cin >> input;
    removeConsecutiveDuplicates(input);
    cout << input;
}