#ifndef HOSTELLER_H
#define HOSTELLER_H

#include "libraries.h"
#include "Student.h"

class Hosteller : public Student
{
private:
    int roomNo;
    string meal;

public:
    Hosteller();
    Hosteller(int id, string name, int roomNo, string meal);
    void display();
    void hi();
};

#endif