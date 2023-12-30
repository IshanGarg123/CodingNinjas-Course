#include <iostream>
using namespace std;
#include <stack>


bool isBalanced(string expression) 
{
    stack <char> s;
    int i=0;
    while (expression[i]!=0)
    {
        if(expression[i]=='(')
        {
            s.push('(');
        }
        if(expression[i]==')')
        {
            if(s.empty())
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
        i++;
    }
    return s.empty();
}



int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}