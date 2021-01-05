/* Week 11 Lab Exercises Question 1:

Design a class for modelling courses) Suppose you need to 
process the information for a series of courses. Each course 
has a name and a number of students who take the course. 
You should be able to add/drop a student to/from the course.*/

#include <iostream>
#include <string>
using namespace std;

class Course {
	
private:
string courseName;
string *students;
int numberOfStudents;
int capacity;

public:
Course(string &courseName, int capacity);
Course();
string getCourseName() const;

void dropStudent(string &name);
void addStudent(string &name);
string *getStudents() const;
int getNumberOfStudnets() const;
};

Course::Course(string &courseName, int capacity) {
this->courseName = courseName;
this->capacity = capacity;
this->numberOfStudents = 0;
this->students = new string[capacity];
}

Course::Course() {
this->courseName = "";
this->capacity = 100;
this->numberOfStudents = 0;
this->students = new string[capacity];
}

string Course::getCourseName() const {
return this->courseName;
}

void Course::dropStudent(string &name) {
int index = -1;
for(int i = 0; i < numberOfStudents; ++i) {
if(students[i] == name) {
index = i;
break;
}
}

if(index != -1) {
for(int i = index; i < numberOfStudents - 1; ++i) {
students[i] = students[i + 1];
}
numberOfStudents--;
}
}

void Course::addStudent(string &name) {
if(numberOfStudents < capacity) {
students[numberOfStudents++] = name;
}
}

string *Course::getStudents() const {
return this->students;
}

int Course::getNumberOfStudnets() const {
return this->numberOfStudents;
}

int main() {
string courseName = "Course-1";
Course course(courseName, 50);
string peter = "Peter Jones";
string brian = "Brian Smith";
string anne = "Anne Kennedy";
course.addStudent(peter);
course.addStudent(brian);
course.addStudent(anne);
cout << "Course name is  " << course.getCourseName() << endl;
cout << "Number of students in Course-1 : " << course.getNumberOfStudnets() << endl;
for(int i = 0; i < course.getNumberOfStudnets(); ++i) {
cout << course.getStudents()[i] << endl;
}
cout << "Removing Brian Smith from course" << endl;
course.dropStudent(brian);
cout << "Number of students in Course-1: " << course.getNumberOfStudnets() << endl;
for(int i = 0; i < course.getNumberOfStudnets(); ++i) {
cout << course.getStudents()[i] << endl;
}
return 0;
}
