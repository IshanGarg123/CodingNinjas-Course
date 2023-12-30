#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    public:
    int age;
    const int rollNumber;
    int &x;

    Student(int r,int age):rollNumber(r),age(age),x(this -> age)
    {

    }

};

int main()
{
    Student s1(101,20);
    s1.age = 20;
}