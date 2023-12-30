#include<iostream>
using namespace std;

int main() {
    char a;
    cin>>a;
    int b=a;

    if (b>=65 and b<=90)
    {
        cout << "1";
    }
    else if(b>90 and b<=122)
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
	
}

