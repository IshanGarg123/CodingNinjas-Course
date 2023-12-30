#include <iostream>
#include <climits>
// as we take INT_MAIN value;
using namespace std;

class StackUsingArray{
    int* data;
    int nextIndex;
    int capacity;

    public:
    StackUsingArray(int size)
    {
        nextIndex = 0;
        data = new int[size];
        capacity = size;
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
            cout << "Stack Full" << endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    // delete the element 
    int pop()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // to view top element
    int top()
    {
         if(isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main()
{
    StackUsingArray s(4);
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