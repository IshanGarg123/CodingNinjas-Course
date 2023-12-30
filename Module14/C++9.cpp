#include <iostream>
using namespace std;

void print(int num,string output)
{
    // base case
    if(num == 0)
    {
        cout << output << endl;
        return;
    }

    string s[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    if(num%10==0 or num%10==1)
    {
        print(num/10,output); 
    }
    else
    {
        int a = num%10;
        int b = a-2;
        // arrage acc to string array
        for(int i=0;i<s[b].length();i++)
        {
            print(num/10,s[b][i]+output);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    string output="";
    print(n,output);

}