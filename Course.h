#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course {
    private: 
    string CourseCode;
    string CourseName;
    int maxstudents;
    Student* Student;
    int currentstatus;
    
    void addStudent(const Student& s);
    void displayCourseInfo();

}//#write your code here














#endif
