#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
Student::assignDetails() {
  studentId = sid;
  strcpy(name , pname);
}

// Display StudentId and Name
Student::display() {
  cout<<"Student ID is: "<<studentId<<endl;
  cout<<"Student name: "<<name<<endl;
  }
