#include <iostream>
using namespace std;

bool helper(char input[],int s,int e)
{
    // base case
    if (e-s<=1)
    {
        return true;
    }
    if(input[s]!=input[e-1])
    {
        return false;
    }
    helper(input,s+1,e-1);

}
bool checkPalindrome(char input[])
{
    int i=0;
    while(input[i]!='\0')
    {
        i++;
    }
    helper(input,0,i);
}
int main()
{
    int n;
    cin >> n;
    char arr[n];
    cin >> arr;

    cout << checkPalindrome(arr);
}