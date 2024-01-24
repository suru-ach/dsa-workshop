#include <iostream>

using namespace std;

int main() {
    // Allocate memory for an integer on the heap
    int* dynamicInt = new int;

    // Assign a value to the dynamically allocated integer
    *dynamicInt = 42;

    // Print the value
    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;

    // Deallocate the memory to avoid memory leaks
    delete dynamicInt;

    // Allocate memory for an array of integers on the heap
    int* dynamicArray = new int[5];

    // Assign values to the dynamically allocated array
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;
    }

    // Print the values in the dynamically allocated array
    cout << "\nDynamically allocated array values:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << dynamicArray[i] << " ";
    }

    // Deallocate the memory for the array
    delete[] dynamicArray;

    return 0;
}

