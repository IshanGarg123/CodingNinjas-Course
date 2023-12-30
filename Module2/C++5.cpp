#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n=";
    cin>>n;
    int i=2;
    int a=0;
    while (i<n)
    {
        if (n%i==0){
            a=1;
            break;
        }   
        i++;
    }

    if (a==0)
    {
        cout << "n is prime";
    }
    else
    {
        cout << "n is not prime";
    }
    
    


}