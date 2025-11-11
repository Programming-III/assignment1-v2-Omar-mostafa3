#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor : public Person {
private:
string department;
int experienceYears;
public:
Instructor(int id, string name , string department, int experienceYears);
Instructor();
void display();
~Instructor();
};


#endif
