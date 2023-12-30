#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:
    void display()
    {
        cout << age << " " << rollNumber << endl;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setAge1(int a , int password)
    {
        if(password != 123)
        {
            return;
        }
        if(a<0)
        {
            return;
        }
        age = a;
    }
    // by making the functions we can apply 
    // condition on the input filled by user
};


int main()
{
    Student s1;

    Student * s2 = new Student;

    s1.rollNumber = 101;
    s2->rollNumber = 102; 

    s1.setAge(20);
    s2 -> setAge(30);

    s1.display();
    s2 -> display();
}

