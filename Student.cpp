#include "libraries.h"
#include "Student.h"

Student::Student()
{
    cout << "Student Default constructer" << endl;
}

Student::Student(int id, string name)
{
    this->id = id;
    this->name = name;
}

void Student::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}