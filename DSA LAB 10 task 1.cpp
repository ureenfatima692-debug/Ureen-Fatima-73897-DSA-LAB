#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* top = NULL;

void push(string page) {
    Node* newNode = new Node;
    newNode->data = page;
    newNode->next = top;
    top = newNode;
}

string pop() {
    if (top == NULL)
        return "";
    Node* temp = top;
    string value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

string peek() {
    if (top == NULL)
        return "";
    return top->data;
}

void display() {
    if (top == NULL) {
        cout << "No history." << endl;
        return;
    }
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice;
    string page;

    while (true) {
        cout << "\n1. Visit Page" << endl;
        cout << "2. Back" << endl;
        cout << "3. Current Page" << endl;
        cout << "4. History" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter page name: ";
            getline(cin, page);
            push(page);
            cout << "Visited: " << page << endl;
        }
        else if (choice == 2) {
            if (top == NULL || top->next == NULL) {
                cout << "Cannot go back" << endl;
            } else {
                pop();
                cout << "Current page: " << peek() << endl;
            }
        }
        else if (choice == 3) {
            if (top == NULL)
                cout << "No page visited yet." << endl;
            else
                cout << "Current page: " << peek() << endl;
        }
        else if (choice == 4) {
            cout << "History: ";
            display();
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}