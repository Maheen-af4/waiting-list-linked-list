#include "LinkedList.h"

int main() {
    Node* head = NULL;
    int choice, roll;
    string name;
    int studentCount = 0;

    do {
        cout << "\n===== WAITING LIST MENU =====\n";
        cout << "1. Insert Student\n";
        cout << "2. Display List\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Count Students\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Roll No: ";
            cin >> roll;
            cout << "Enter Name: ";
            cin >> name;

            insertAtEnd(head, roll, name);
            studentCount++;

            // ✅ Message when 5 students inserted
            if (studentCount == 5) {
                cout << "✅ 5 students successfully added to the waiting list!\n";
            }
            break;

        case 2:
            displayList(head);
            break;

        case 3:
            cout << "Enter roll to search: ";
            cin >> roll;
            searchStudent(head, roll);
            break;

        case 4:
            cout << "Enter roll to delete: ";
            cin >> roll;
            deleteByRollNo(head, roll);

            if (studentCount > 0) {
                studentCount--;
            }
            break;

        case 5:
            cout << "Remaianing Students: " << countStudents(head) << endl;
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
