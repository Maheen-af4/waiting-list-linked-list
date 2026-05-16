#include "LinkedList.h"

// Insert at end
void insertAtEnd(Node*& head, int roll, string name) {
    Node* newNode = new Node{roll, name, NULL};

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete by roll number
void deleteByRollNo(Node*& head, int roll) {
    Node* temp = head;
    Node* prev = NULL;

    if (temp != NULL && temp->rollNo == roll) {
        head = temp->next;
        delete temp;
        cout << "Student deleted.\n";
        return;
    }

    while (temp != NULL && temp->rollNo != roll) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Student not found.\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Student deleted.\n";
}

// Search student
void searchStudent(Node* head, int roll) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->rollNo == roll) {
            cout << "Found: " << temp->rollNo << " - " << temp->name << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Student not found.\n";
}

// Display list
void displayList(Node* head) {
    Node* temp = head;

    cout << "\nWaiting List:\n";
    while (temp != NULL) {
        cout << temp->rollNo << " - " << temp->name << endl;
        temp = temp->next;
    }
}

// Count students
int countStudents(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}