/*
  This program serves as the header for the node files I'll be sending over to 
  somebody else in C++. They'll be using this node.h file in order to make 
  their linked lists student list project. 
  Author: Kevin Chacko
  Last Updated: 12/5/2023
  Period 6, C++ / Data Structures
*/

//Implement a header guard
#ifndef NODE_H
#define NODE_H

//imports
#include <iostream>
#include "student.h"

using namespace std;

//Start of the singly linked list node class for the student class
class node {
 public:
  node(student* inputStudent);
  ~node();
  student*  getStudent();
  void setNode(node* newNext);
  node* getNode();

 private:
  student* pupil;
  node* nextNode;
};

#endif
