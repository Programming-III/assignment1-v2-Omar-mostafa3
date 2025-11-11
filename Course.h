#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course {
private:
string courseName;
string courseCode;
int currentStudents;
int maxStudents;
Student* students[];
public:
Course(string courseName, string courseCode, int maxStudents , Student* students[] , int currentStudents);
Course();
void addStudent(Student* student);
void displayCourseInfo();
~Course();
};













#endif
