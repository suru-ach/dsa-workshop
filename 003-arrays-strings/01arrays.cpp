#include <iostream>

using namespace std;

int main() {
    // Declare an array of integers with size 5
    int numbers[5];

    // Initialize an array of integers at declaration
    int array_1[] = {1, 2, 3, 4, 5};

    // Access and print array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << array_1[i] << " ";
    }

    // Modify array elements
    array_1[2] = 10;

    // Access and print modified array elements
    cout << "\nModified array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << array_1[i] << " ";
    }

    return 0;
}

