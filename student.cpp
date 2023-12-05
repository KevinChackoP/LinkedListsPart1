/*
  This program serves as an example student cpp file for the proof that my
  node files work. This isn't actually how the student cpp file should be,
  it's just the bear minimum to test the node files.
  Author: Kevin Chacko
  Last Updated: 12/5/2023
  Period 6, C++ / Data Structures
*/

//imports
#include "student.h"

//Constructor for student class
student::student(int initialValue) {
  number = initialValue;
}

//Destructor for student class
student::~student() {
  delete &(number);
}

//getter function for student number value
int student::getInt() {
  return number;
}

//setter function for student number value
void student::setInt(int newInt) {
  number = newInt;
}

//function that will add the passed in number to the student number value
void student::addInt(int addedValue) {
  number += addedValue;
}
