#include <iostream>

using namespace std;

// Class template for a generic Pair
template <typename T>
class Pair {
public:
    // Member variables
    T first;
    T second;

    // Constructor
    Pair(T f, T s) : first(f), second(s) {}

    // Member function to display the pair
    void displayPair() {
        cout << "(" << first << ", " << second << ")";
    }
};

int main() {
    // Create a Pair of integers
    Pair<int> intPair(3, 7);

    // Display the integer pair
    cout << "Integer Pair: ";
    intPair.displayPair();
    cout << endl;

    // Create a Pair of doubles
    Pair<double> doublePair(1.5, 2.5);

    // Display the double pair
    cout << "\nDouble Pair: ";
    doublePair.displayPair();
    cout << endl;

    return 0;
}

