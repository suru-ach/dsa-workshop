#include <iostream>

using namespace std;

// Pass by value function
void incrementByValue(int x) {
    x++;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;

    // Calling the function with pass by value
    incrementByValue(num);

    // Original value remains unchanged
    cout << "Outside function: " << num << endl;

    return 0;
}

