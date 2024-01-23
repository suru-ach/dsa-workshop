#include <iostream>

using namespace std;

int main() {
    // Example: Check eligibility
    int age;
    bool isStudent;

    // Input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a student? (1 for true / 0 for false): ";
    cin >> isStudent;

    // Check eligibility
    if (age >= 18 && !isStudent) {
        cout << "You are eligible." << endl;
    } else {
        cout << "You are not eligible." << endl;
    }

    return 0;
}

