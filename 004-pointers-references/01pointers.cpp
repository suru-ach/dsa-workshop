#include <iostream>

using namespace std;

int main() {

    // Declare a variable and initialize it
    int myNumber = 42;
    int anotherNumber = myNumber;

    // Declare a pointer and assign the address of the variable to it
    int* pointerToNumber = &myNumber;

    // Print the value of the variable and the pointer
    cout << "Value of myNumber: " << myNumber << endl;
    cout << "Address of myNumber: " << &myNumber << endl;

    cout << "Value pointed to by pointerToNumber: " << *pointerToNumber << endl;
    cout << "Address stored in pointerToNumber: " << pointerToNumber << endl;

    // Modify the value through the pointer
    *pointerToNumber = 99;

    // Print the updated value of the variable
    cout << "Updated value of myNumber: " << myNumber << endl;


    // Part: 2 ****************

    // Pointer to a Pointer
    int** pointerToPointer = &pointerToNumber;

    **pointerToPointer = 100;

    // Print the updated value of the variable
    // cout << "Updated value of myNumber: " << myNumber << endl;

    return 0;
}

