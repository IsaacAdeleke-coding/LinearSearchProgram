//
//  main.cpp
//  LinearSearchProgram
//
//  Created by Isaac Adeleke on 10/7/24.
//


#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Loop through the array
    for (int i = 0; i < size; i++) {
        // If the target is found, return the index
        if (arr[i] == target) {
            return i;
        }
    }
    // If the target is not found, return -1
    return -1;
}

int main() {
    const int SIZE = 6;
    int arr[SIZE] = {10, 23, 45, 70, 11, 15};  // Example array
    int target;

    // Ask the user to input the target value
    cout << "Enter the number to search for: ";
    cin >> target;

    // Call the linearSearch function
    int result = linearSearch(arr, SIZE, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
