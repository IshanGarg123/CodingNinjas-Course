// reverse a string
#include<iostream>
using namespace std;

int length(char *arr)
{
    int i=0;
    while(arr[i]!='\0')
    {
        i++;
    }
    return i;
}

void reverse(char input[])
{
    int len = length(input);
    int i=0;
    int j= len-1;

    while(j>i)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char name[100];
    cin.getline(name,100);
    cout << name << endl;
    reverse(name);
    cout << name << endl; 
}
