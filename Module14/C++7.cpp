#include <iostream>
using namespace std;

int keypad(int num, string output[])
{
    // base case
    if (num==0 or num==1)
    {
        output[0]=" ";
        return 1;
    }

    int smalloutput = keypad(num/10,output);

    if(num%10==0 or num%10==1)
    {
        return smalloutput;
    }

    else if(num%10==2)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'b';
            output[i+2*smalloutput]=output[i]+'c';
            output[i]=output[i]+'a';
            // a string is written in last step
            // as we cant want to modify output[i]
            // output[i] is used in making another string
            // as when we make all strings
            // than at last we modify output[i];
        }
        return smalloutput*3;
    }

    else if(num%10==3)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'e';
            output[i+2*smalloutput]=output[i]+'f';
            output[i]=output[i]+'d';
        }
        return smalloutput*3;
    }

     else if(num%10==4)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'h';
            output[i+2*smalloutput]=output[i]+'i';
            output[i]=output[i]+'g';
        }
        return smalloutput*3;
    }

     else if(num%10==5)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'k';
            output[i+2*smalloutput]=output[i]+'l';
            output[i]=output[i]+'j';
        }
        return smalloutput*3;
    }

    else if(num%10==6)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'n';
            output[i+2*smalloutput]=output[i]+'o';
            output[i]=output[i]+'m';
        }
        return smalloutput*3;
    }

     else if(num%10==7)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'q';
            output[i+2*smalloutput]=output[i]+'r';
            output[i+3*smalloutput]=output[i]+'s';
            output[i]=output[i]+'p';
        }
        return smalloutput*4;
    }

     else if(num%10==8)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'u';
            output[i+2*smalloutput]=output[i]+'v';
            output[i]=output[i]+'t';
        }
        return smalloutput*3;
    }

    else if(num%10==9)
    {
        for(int i=0;i<smalloutput;i++)
        {
            output[i+smalloutput]=output[i]+'x';
            output[i+2*smalloutput]=output[i]+'y';
            output[i+3*smalloutput]=output[i]+'z';
            output[i]=output[i]+'w';
        }
        return smalloutput*4;
    }
}

int main()
{
    int n;
    cin >> n;
    string output[1000];
    int count = keypad(n,output);
    for(int i=0;i<count;i++)
    {
        cout << output[i] << endl;
    }
}