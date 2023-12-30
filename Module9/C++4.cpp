#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[100];
    cin >> name;

    char name1[100];
    cin >> name1;

    char name2[100];

    int len = strlen(name);
    cout << len << endl;

    if(strcmp(name,name1)==0)
    {
        cout << "string are equal" << endl;
    }
    else
    {
        cout << "strings are not equal" << endl; 
    }

    strcpy(name2,name1);
    cout << name2 << endl;
    
}
