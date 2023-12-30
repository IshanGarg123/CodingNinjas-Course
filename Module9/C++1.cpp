#include<iostream>
using namespace std;
// \0 = null charater

// by for loop
int length(char input[])
{
    for(int i=0;i<100;i++)
    {
        if (input[i]=='\0')
        {
            return i;
            break;
        }
    }
}

// by while loop

int length1(char input[])
{
    int i=0;
    while(input[i]!='\0')
    {
        i++;
    }
    return i;

}


int main()
{
    char name[100];
    cout << "enter Name =";
    cin >> name ;
    cout << name << endl;

    cout << length(name) << endl;
    cout<< length1(name) << endl;

    char name1[100]="abcde";
    name1[7] = 'x';
    cout << name1 << endl;

    char name2[100]="abcde";
    name2[1] = '\0';
    cout << name2 << endl;
}