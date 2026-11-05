#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* top = NULL;

void push(string word) {
    Node* newNode = new Node;
    newNode->data = word;
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

int size() {
    int count = 0;
    Node* temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    int choice;
    string word;

    while (true) {
        cout << "\n1. Type Word" << endl;
        cout << "2. Undo" << endl;
        cout << "3. Word Count" << endl;
        cout << "4. Last Word" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter word: ";
            getline(cin, word);
            push(word);
        }
        else if (choice == 2) {
            if (top == NULL) {
                cout << "Nothing to undo" << endl;
            } else {
                cout << "Undone: " << pop() << endl;
            }
        }
        else if (choice == 3) {
            cout << "Word Count: " << size() << endl;
        }
        else if (choice == 4) {
            if (top == NULL)
                cout << "No words typed." << endl;
            else
                cout << "Last Word: " << peek() << endl;
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