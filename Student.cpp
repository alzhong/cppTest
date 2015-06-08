#include "Student.h"
#include "xtra.h"
#include <iostream>

Student::Student(std::string nm, std::string yr, float g)
    : name(nm), year(yr), gpa(g)
{
}

void Student::boost_grade()
{
    gpa += 1.0;
    if (gpa > 4.0)
    {
        gpa=4.0;
    }
}



void Student::display()
{
    std::cout << "Student Record" << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Academic Level: " << year << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
}


