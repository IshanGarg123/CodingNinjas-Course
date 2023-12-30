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
    Pair_better<Pair_better<int,int>,int> p1;
    p1.setY(10);
    Pair_better<int,int> p2;
    p2.setX(1);
    p2.setY(2);

    p1.setX(p2);

    cout << p1.getX().getX() << " " << p1.getX().getY() << " " << p1.getY() << endl;
}