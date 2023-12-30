#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=1;
    int b=1;
    int c;
    if (n==1 or n==2)
    {
        cout << 1;
    }
    else
    {
        for (int i=2;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout << c;
    }
    
    
}
