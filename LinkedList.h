#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node {
    int rollNo;
    string name;
    Node* next;
};

// Function declarations
void insertAtEnd(Node*& head, int roll, string name);
void deleteByRollNo(Node*& head, int roll);
void searchStudent(Node* head, int roll);
void displayList(Node* head);
int countStudents(Node* head);

#endif