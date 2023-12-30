#include <iostream>
#include <cstring>
using namespace std;

class Student{
    private:
    int age;
    public:
    char* name;

    public:
    Student(int age,char* name)
    {
        this -> age = age;
        // Shallow copy
        //this -> name = name;

        // Deep copy
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name , name);
    }

    // copy constructor 
    Student(Student const &s)
    {
        this -> age = s.age;
        //Shallow copy
        // this -> name = s.name

        // deep copy
        this -> name = new char[strlen(s.name)+1];
        strcpy(this -> name ,s.name);
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    char name[]="abcd";
    Student s1(20,name);
    s1.display();

    Student s2(s1);
    s2.name[0]='x';
    s1.display();
    s2.display();
}