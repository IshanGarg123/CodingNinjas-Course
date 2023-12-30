#include <iostream>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) 
{
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0]==c1)
    {
        input[0]=c2;
    }
    replaceCharacter(input+1,c1,c2);
}

int main()
{
    char input[10];
    cin >> input;
    char a;
    cin >> a;
    char b;
    cin >> b;
    replaceCharacter(input,a,b);
    cout << input;
}