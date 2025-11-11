#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

#include "Person.hpp"
#include <iostream>
using namespace std;

Person::Person(string name, int id) {
    this->name = name;
    this->id = id;
}
Person::Person() {
    name = "Unknown";
    id = 0;
}
void Person::display() {
    cout << "Name: " << name << ", ID: " << id << endl;
}
Person::~Person() {
}
Student::Student(string name, int id, int yearLevel, string major ) {
    this->name = name;
    this->id = id;
    this->yearLevel = yearLevel;
    this->major = major;
} 
    Student::Student() {
        name = "";
        id = 0;
        yearLevel=""
        major= ""
    }

    void Stuednt::display() {
    cout << "Name: " << name << ", ID: " << id << ",yearlevel" << yearlevel << "Major " << major << endl;
}

Stuednt::~Stuednt() {
}

Instructor::Instructor(int id, , string name , string department, int experienceYears ) {
    this->name = name;
    this->id = id;
    this->department = department;
    this->experienceYears = experienceYears;
}
    Instructor::Instructor() {
        name = "";
        id = 0;
        experienceYears=0;
        department= ""
    }
    Instructor::Instructor() {
    }
    void Stuednt::display() {
    cout << "Name: " << name << ", ID: " << id << ",department" << department << "experienceYears " << experienceYears << endl;
}

Instructor::~Instructor() {
}
Course::Course(string courseName, string courseCode, int maxStudents , Student* students[] , int currentStudents) {
    this->courseName = courseName;
    this->courseCode = courseCode;
    this->students = students;
    this->currentStudents = currentStudents;

} 


    void Course::displayCourseInfo() {
    cout << "courseName: " << courseName << ", courseCode: " << courseCode << ",students" << students << "currentStudents " << currentStudents << endl;
}



Course::addStudent(const Studnet& s ){
   students[currentStudents ++] = s;
}
Course::~Course() {
}




int main() {
   
int main() {
    Student s1("Omar Nabil", 2202, 2, "Informatics");
    Instructor i1("Dr. Lina Khaled", 201, "Computer Science ", 5);
    Course c1("CS101 - Introduction to Programming ",CS101 ,&s1 , 3);
   s1.display();
   c1.addStudent(&s1);
    c1.displayCourseInfo();
    i1.display();
    
    return 0;   
}
    
    
}
