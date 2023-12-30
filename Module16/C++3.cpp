#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:

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

    /*
    optional way
    Student(int rollNumber)
    {
        cout << "constructor 2 called!" << endl;
        this -> rollNumber = rollNumber;
    }
    */

    Student (int a,int r)
    {
        cout << "Constructor 3 Called!" << endl;
        age = a;
        rollNumber = r;
    }

    /*
    optional way
     Student (int a,int r)
    {
        cout << "Constructor 3 Called!" << endl;
        this -> age = a;
        this -> rollNumber = r;
    }
    */

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
    Student s1;
    cout << "Address of s1:" << &s1 << endl;
    s1.display();

    Student s2;

    Student *s3 = new Student;
    s3 -> display();

    cout << "Parametrized Constructor" << endl;

    Student s4(10);
    s4.display();

    Student *s5 = new Student(100);
    s5 -> display();

    Student s6 (10,100);
    s6.display();
}