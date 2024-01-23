#include <iostream>

using namespace std;

int main() {
    // Example: Print numbers using a for loop
    for (int i = 1; i <= 5; ++i) {
        cout << "Iteration " << i << endl;
    }

    // Example: Print numbers using a while loop
    int counter = 0;
    while (counter < 5) {
        cout << "Counter: " << counter << endl;
        ++counter;
    }

    // Example: Print numbers using a do while loop
    int i = 1;
    do {
        cout << "Iteration " << i << endl;
        ++i;
    } while (i <= 5);

    return 0;
}

