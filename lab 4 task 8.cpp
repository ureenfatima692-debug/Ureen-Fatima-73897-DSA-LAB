#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 40;
    int low = 0;
    int high = size - 1;
    int foundIndex = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break; 
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    if (foundIndex != -1) {
        cout << "Element " << target << " found at index " << foundIndex << endl;
    } else {
        cout << "Element " << target << " not found in array" << endl;
    }
    return 0;
}