#include <iostream>
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int remainder) {
    Node* newNode = new Node;
    newNode->data = remainder;
    newNode->next = top;
    top = newNode;
}

int pop() {
    if (top == NULL)
        return -1;
    Node* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

void convertBinary(int num) {
    if (num == 0) {
        cout << "Binary: 0" << endl;
        return;
    }

    while (num > 0) {
        int remainder = num % 2;
        push(remainder);
        num = num / 2;
    }

    cout << "Binary: ";

    while (top != NULL) {
        cout << pop();
    }

    cout << endl;
}

int main() {
    int num;

    cout << "Enter decimal number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative number." << endl;
    }
    else {
        convertBinary(num);
    }

    return 0;
}