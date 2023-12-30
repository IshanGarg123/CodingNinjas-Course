#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;
    int age;

    static int totalStudents;
    Student(){
        totalStudents++;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    static int getTotalStudent()
    {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main()
{
    Student s1;
    s1.age = 10;
    s1.rollNumber = 101;

    cout << s1.age << " " << s1.rollNumber << endl;
    cout << Student :: totalStudents << endl;
    
    // static member properties
    // we can change the value 
    s1.totalStudents = 1; 
    // we can print the value by this way also
    cout << s1.totalStudents << endl;

    Student s2;

    Student s3,s4,s5;

    cout << Student :: totalStudents << endl;
    
    cout << Student::getTotalStudent() << endl;
}