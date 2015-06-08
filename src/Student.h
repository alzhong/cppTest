#ifndef STUDENT_H
#define STUDENT_H

#include<string>

class Student{
    public:
        Student(std::string nm, std::string yr, float g);
        void boost_grade();
        void display();
    
    private:
        std::string name;
        std::string year;
        float gpa;
};


#endif
