/*
  This program serves as an example main file utilizing my node files. It
  shows and proves that the node files work as intended and as needed for the
  student list linked list project that the person who I'll be handing the
  node files over to will be using. 
  Author: Kevin Chacko
  Last Updated: 12/5/2023
  Period 6, C++ / Data Structures
*/

//imports
#include <iostream>
#include "node.h"

using namespace std;

//function prototypes
void addNode(student* newStudent, node* & head);
void printNodes(node* next, node* head);

//main class
int main() {
  //local variables
  node* head = NULL;
  student* value = new student(4);

  //tests done on node files
  addNode(value, head);
  printNodes(head, head);
  value = new student(9);
  addNode(value, head);
  printNodes(head, head);
  value = new student(104);
  addNode(value, head);
  printNodes(head, head);
  value = new student(49);
  addNode(value, head);
  printNodes(head, head);

  head -> getNode() -> getNode() -> getStudent() -> addInt(217);
  printNodes(head, head);

  head -> getNode() -> getStudent() -> setInt(78);
  printNodes(head, head);
}

//Add a new node to end of linked example student list
void addNode(student* newStudent, node* & head) {
  node* current = head;
  if(current == NULL) { //If no nodes made, start with this node
    head = new node(newStudent);
  } else { //otherwise, go to end of list then add new value to new end node
    //This method of getting to the end of the list
    //tests if iteration works
    while(current -> getNode() != NULL) {
      //Keep going through each node until you hit a null next node pointer
      current = current -> getNode();
    }
    //at end, make new node and give it the wanted student pointer
    current -> setNode(new node(newStudent));
  }
}

//Print thru whole student example list starting with given node
//This tests if recursion works
void printNodes(node* next, node* head) {
  if(next == head) {
    //start of list
    cout << "list: ";
  }
  if(next != NULL) { //This is base case, will break recursion if false
    //print example student in list
    cout << next -> getStudent() -> getInt() << " ";
    printNodes(next -> getNode(), head);
  } else {
    //put a clean end line at end of list
    cout << endl;
  }
}
