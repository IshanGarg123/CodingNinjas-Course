#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;
    int age;
};

class Product{
    public:
    int id;
    private:
    char name[100];
};

// means id is public
// name is private


int main()
{
    // create object statically
    Student s1;
    Student s2;

    Student s3,s4,s5;

    s1.age = 24;
    s1.rollNumber = 101;

    cout << s1.age << endl;
    cout << s1.rollNumber << endl;

    s2.age = 30;
    s2.rollNumber = 102;

    // create object dynamically
    Student *s6 = new Student;

    (*s6).age = 23;
    (*s6).rollNumber = 104;

    cout << s6 -> age << endl;
    cout << s6 -> rollNumber << endl;
}