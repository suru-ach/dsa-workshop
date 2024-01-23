#include <iostream>

using namespace std;

// Pass by reference function
void incrementByReference(int &x) {
    x++;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;

    // Calling the function with pass by reference
    incrementByReference(num);

    // Original value is modified
    cout << "Outside function: " << num << endl;

    return 0;
}
