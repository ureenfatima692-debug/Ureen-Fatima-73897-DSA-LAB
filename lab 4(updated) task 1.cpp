#include <iostream>
using namespace std;

int main() {
    int arr[5] = {20, 30, 40, 50}; // Array with capacity for 5 elements
    int size = 4;
    int val = 15;

    // Shift elements to the right to make space at index 0
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element at index 0
    arr[0] = val;
    size++;

    // Print array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}