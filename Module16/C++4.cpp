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
    Student s1(10,1001);
    cout << "S1" << endl;
    s1.display();

    // copy constructor called
    Student s2(s1);
    cout << "S2" << endl ;
    s2.display();

    Student *s3 = new Student(20,1002);
    cout << "S3" << endl;
    s3 -> display();

    Student s4(*s3);

    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);

    // Copy Assignment Operator

    Student S1(10,1001);
    Student S2(20,2001);
    Student *S3 = new Student(30,3001);
    Student *S4 = new Student(40,4001);

    // the value of S1 is copy in S2
    S2 = S1;
    // the value of S1 is copy in S3
    *S3 = S1;
    // the value of S4 is copy in S2
    S2 = *S4;
    // the value of S4 is copy in S3
    *S3 = *S4;

    delete S3;
    delete S4;
}