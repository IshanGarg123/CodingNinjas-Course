#include <iostream>
using namespace std;

class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:

    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    // copy constructor
    // deep copy
    DynamicArray(DynamicArray const &d)
    {
        nextIndex = d.nextIndex;
        capacity = d.capacity;

        data = new int[capacity];

        for(int i=0;i<nextIndex;i++)
        {
            data[i] = d.data[i];
        }
    }

    void operator=(DynamicArray const &d)
    {
        nextIndex = d.nextIndex;
        capacity = d.capacity;

        data = new int[capacity];

        for(int i=0;i<nextIndex;i++)
        {
            data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i] = data[i];
            }

            delete [] data;
            data = newdata;
            capacity = 2*capacity;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    int get(int i) const
    {
        if(i<nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void add(int i,int element)
    {
        if(i< nextIndex)
        {
            data[i]=element;
        }
        else if(i == nextIndex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    void print() const
    {  
        for(int i=0;i<nextIndex;i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }         
};

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    // copy constructor 
    DynamicArray d2(d1);

    DynamicArray d3;

    // copy operator
    d3 = d1;

    d1.add(0,100);

    d2.print();

    d3.print();
}