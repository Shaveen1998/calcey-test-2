#include "libraries.h"
#include "Student.h"
#include "Hosteller.h"

int main()
{
    Student *ptr1;
    Student *ptr2;
    Hosteller *ptr3;

    Student s1(1, "John");
    ptr1 = &s1;

    Hosteller h1(1, "John", 205, "Fish");
    ptr2 = &h1;
    ptr3 = &h1;
    ptr2->display();
    return 0;
}