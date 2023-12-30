#include<iostream>
using namespace std;


int main(){
    int S,E,W;
    cin>>S;
    cin>>E;
    cin>>W;
    int i=S;
    while (i<=E){
        int C = (5*(i-32))/9;
        cout << i << " " << C << "\n";
        i=i+W;
    }
  
}
