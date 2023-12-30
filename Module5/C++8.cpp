#include<iostream>
using namespace std;

int main(){
    char c;
    c=cin.get();
    int a=c;
    int alpha=1;
    int num=0;
    int space=-1;
    while (c!='$')
    {
        c= cin.get();
        int a=c;
        if (a>=97 and a<=122)
        {
            alpha=alpha+1;
        }
        else if(a>=65 and a<=90)
        {
            alpha=alpha+1;
        }
        else if( a>=48 and a<=57)
        {
            num=num+1;
        }
        else
        {
            space=space+1;
        }
    }
    
    cout << alpha << " " << num << " " << space;
  
}


