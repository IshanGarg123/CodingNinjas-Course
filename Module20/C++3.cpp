#include <iostream>
using namespace std;

class Pair{
    int x;
    int y;

    public:

    void setX(int x)
    {
        this -> x = x;
    }

    int getX()
    {
        return x;
    }

    void setY(int y)
    {
        this -> y = y;
    }

    int getY()
    {
        return y;
    }

};

template <typename T>

class Pair_better{
    T x;
    T y;

    public:

    void setX(T x)
    {
        this -> x = x;
    }

    T getX()
    {
        return x;
    }

    void setY(T y)
    {
        this -> y = y;
    }

    T getY()
    {
        return y;
    }

};


int main()
{
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
}