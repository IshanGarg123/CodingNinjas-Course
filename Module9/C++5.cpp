#include<iostream>
#include<cstring>
using namespace std;

void printAllPrefixes(char input[])
{
    int count=0;
    while(input[count]!='\0')
    {
        count++;
    }

    for(int i=0;i<count;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}

int main()
{
    char name[100];
    cin >> name;

    char name1[100];
    cin >> name1;

    cout << "before copying in name1 = ";
    cout << name1 << endl;

    strncpy(name1,name,3);

    cout << "after copying in name1 = ";
    cout << name1 << endl;

    printAllPrefixes(name);




}
