#include "libraries.h"
#include "Student.h"
#include "Hosteller.h"

Hosteller::Hosteller()
{
    cout << "Hosteller Default constructer" << endl;
}

Hosteller::Hosteller(int id, string name, int roomNo, string meal) : Student(id, name)
{
    this->roomNo = roomNo;
    this->meal = meal;
}

void Hosteller::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "roomNo: " << roomNo << endl;
    cout << "meal: " << meal << endl;
}

void Hosteller::hi()
{
    cout << "Hi hosteller" << endl;
}