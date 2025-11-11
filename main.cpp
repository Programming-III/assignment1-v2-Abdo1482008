#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

#include <iostream>

using namespace std;
class Person {
    public:
    string name;
    int id;

void displau(){
    cout << name << endl;
    cout << id << endl;

}





}
class Student :: Person {
    public:
    int yearLevel;
    string major;

    Student(int y, string e){
        yearLevel = y;
       major = e;
    }
     void display(){
        cout << yearLevel << endl;
        cout << major << endl;
    }







}

class Course :: Student {
    private: 
    string CourseCode;
    string CourseName;
    int maxstudents;
    Student* Student;
    int currentstatus;
    
    void addStudent(const Student& s){
        Student.add(s);
    }
    void displayCourseInfo();
    cout << Student.display()<<endl;
    cout << CourseCode << endl;
    cout << CourseName << endl;
    cout << maxstudents << endl;
    cout << currentstatus << endl;

}
class instructor:: Person {
    public:
    string department;
    int experienceYears;

    void display(){
 cout << department << endl;
        cout << experienceYears << endl;
    }
    



}
int main() {
   Student s  = new Student(5 , "cs");
   addStudent(s);
   instructor i = new instructor("sales" , 5);
   Course c  new Course("CSIN" , "PROG" , 50 , 2);
   c.displayCorseInfo();
   s.display();
   i.display();

   
    
    return 0;
}
