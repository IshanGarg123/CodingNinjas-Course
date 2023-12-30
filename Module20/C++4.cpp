#include <iostream>
using namespace std;

template <typename T,typename V>

class Pair_better{
    T x;
    V y;

    public:

    void setX(T x)
    {
        this -> x = x;
    }

    T getX()
    {
        return x;
    }

    void setY(V y)
    {
        this -> y = y;
    }

    V getY()
    {
        return y;
    }

};



int main()
{

    Pair_better <int , double> p1;
    p1.setX(100.34);
    p1.setY(100.34);

    cout << p1.getX() << " " << p1.getY() << endl;

    /*
    Pair_better <int> p1;
    // int define the value of T in class
    Pair_better <double> p2; 
    // double define the value of T in class

    p1.setX(10);
    p1.setY(20);

    cout << p1.getX() << " " << p1.getY() << endl;

    p2.setX(101.1);
    p2.setY(100.0);

    cout << p2.getX() << " " << p2.getY() << endl;

    Pair_better <char> p3;
    */
}
