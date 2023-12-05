/*
  This program serves as the cpp for the node files I'll be sending over to 
  somebody else in C++. They'll be using this node.cpp file in order to make 
  their linked lists student list project. 
  Author: Kevin Chacko
  Last Updated: 12/5/2023
  Period 6, C++ / Data Structures
*/

//imports
#include "node.h"

//Constructor for node class
node::node(student* inputStudent) {
  //Assign node's student based on construction parameter
  pupil = inputStudent;

  //Set the next node to null (will need to set node later)
  nextNode = NULL;
}

//Destructor for node class
node::~node() {
  delete pupil;
  nextNode = NULL;
}

//Getter function for Node's held student
student* node::getStudent() {
  return pupil;
}

//Setter function for Node's next node link
void node::setNode(node* newNext) {
  nextNode = newNext;
}

//Getter function for Node's next node link
node* node::getNode() {
  return nextNode;
}
