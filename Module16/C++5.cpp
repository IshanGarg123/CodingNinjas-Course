#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:
    // Destructor Called
    ~Student()
    {
        cout << "Destructor called ! " <<endl; 
    }

    // default constructor
    Student()
    {
        cout << "Constructor Called !" << endl;
        cout << "this is = " << this << endl;
    }
    // Parameterized constructor
    Student(int r)
    {
        cout << "constructor 2 called!" << endl;
        rollNumber = r;
    }

    Student (int a,int r)
    {
        cout << "Constructor 3 Called!" << endl;
        age = a;
        rollNumber = r;
    }

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
};

int main()
{
    // constructor 1 called
    Student s1;

    // constructor 2 called
    Student s2(10);

    // constructor 3 called
    Student s3(20,2001);

    // Copy constructor
    Student s4(s3);

    // Copy operator
    s1 = s2;

    // Copy constructor called by copy operator
    Student s5 = s4;
}