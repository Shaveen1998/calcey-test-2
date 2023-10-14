#ifndef STUDENT_H
#define STUDENT_H

#include "libraries.h"

class Student
{
protected:
    int id;
    string name;

public:
    Student();
    Student(int id, string name);
    virtual void display();
};

#endif