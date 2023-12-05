/*
  This program serves as an example student header file for the proof that my 
  node files work. This isn't actually how the student header file should be, 
  it's just the bear minimum to test the node files. 
  Author: Kevin Chacko
  Last Updated: 12/5/2023
  Period 6, C++ / Data Structures
*/

//Implemention of a header guard for header file
#ifndef STUDENT_H
#define STUDENT_H

//imports
#include <iostream>

using namespace std;

//Start of student class
class student {
 //Public functions for class
 public:
  student(int initialValue);
  ~student();
  int getInt();
  void setInt(int newInt);
  void addInt(int addedValue);

 //Private variables & pointers for class
 private:
  int number;
};

#endif
