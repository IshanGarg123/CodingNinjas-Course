#include <iostream>
#include <cstring>
using namespace std;

class Student{
    private:
    int age;
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

    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    char name[10] = "ishan";
    Student s1(18,name);
    s1.display();

    name[0]='a';
    Student s2(18,name);
    s2.display();

    s1.display();
}
