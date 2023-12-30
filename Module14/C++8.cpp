#include <iostream>
using namespace std;

void print_subs(string input,string output)
{
    //base case
    if (input.empty())
    {
        cout << output << endl;
        return;
    }

    print_subs(input.substr(1),output);
    print_subs(input.substr(1),output+input[0]);

}

int main()
{
    string a;
    cin >> a;
    string b="";
    print_subs(a,b);
}