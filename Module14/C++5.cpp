#include <iostream>
using namespace std;

int main()
{
    string s="abc";
    cout << s << endl;

    string s1;
    s1="def";
    cout << s1 << endl;

    string* sp = new string;
    *sp ="ghi";
    cout << sp << endl;
    cout << *sp << endl;

    string s2;
    cout << "enter the string " << endl;
    //cin >> s2;
    //cout << s2 << endl;

    string s3;
    cout << "enter the string " << endl;
    getline(cin,s3);
    cout << s3 << endl;

    s="defdef";
    cout << s[0] << endl;
    s[0]='a';

    string s4 = "abcd";

    string s5 = s+s4;
    cout << s5 << endl;

    cout << s.size() << endl;
    cout << s.length() << endl;
    cout << s.substr(2) << endl;
    cout << s.substr(3,3) << endl;
    cout << s.find("efd") << endl;
}
