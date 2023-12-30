#include <iostream>
using namespace std;
#include<cstring>

void removeX(char input[])
{
    int len = strlen(input);
    if (input[0]=='\0')
    {
        return;
    }
    if(input[0]!='x')
    {
        removeX(input+1);
    }
    else
    {
        for(int i=0;i<=len-1;i++)
        {
            input[i]=input[i+1];
        }
        removeX(input);
    }

}

int main()
{
    char arr[10];
    cin >> arr;
    removeX(arr);
    cout << arr;
}