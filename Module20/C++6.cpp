#include <iostream>
#include <climits>
// as we take INT_MAIN value;
using namespace std;

template<typename T>
class StackUsingArray{
    T* data;
    int nextIndex;
    int capacity;

    public:
    StackUsingArray()
    {
        nextIndex = 0;
        data = new T[4];
        capacity = 4;
    }

    // return the no of elements in the array
    // size
    int size()
    {
        return nextIndex;
    }

    // isEmpty
    bool isEmpty()
    {
        if(nextIndex==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // insert element 
    void push(int element)
    {
        if(nextIndex == capacity)
        {
            /*cout << "Stack Full" << endl;
            return;*/
            T* newData = new T[capacity*2];
            for(int i=0;i<capacity;i++)
            {
                newData[i] = data[i];
            }

            capacity = capacity*2;
            delete [] data; 
            data = newData;     
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    // delete the element 
    T pop()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // to view top element
    T top()
    {
         if(isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};


int main()
{
    StackUsingArray <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.size() << endl;

    cout << s.isEmpty() << endl;
}