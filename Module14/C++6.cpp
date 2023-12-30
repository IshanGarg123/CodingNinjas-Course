#include <iostream>
using namespace std;

int subSequence(string input,string output[])
{
    // base case 
    if(input.empty())
    {
        output[0]=" ";
        return 1;
    }

    string smallSize = input.substr(1);
    int smallOutput = subSequence(smallSize,output);

    for(int i=0;i<smallOutput;i++)
    {
        output[i+smallOutput] = input[0]+output[i];
    }
    return 2*smallOutput;
}


int main()
{
    string input;
    cin >> input;
    string output[100];
    int count = subSequence(input,output);
    for(int i=0;i<count;i++)
    {
        cout << output[i] << endl;
    }
}