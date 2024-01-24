#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize strings
    string greeting = "Hello";
    // Insert your name
    string name = "Your_name";

    // Concatenate strings
    string fullGreeting = greeting + ", " + name + "!";

    // Print concatenated string
    cout << "Full Greeting: " << fullGreeting << endl;

    // Find substring in a string
    int pos = fullGreeting.find("name");
    if (pos != string::npos) {
        cout << "Substring 'name' found at position: " << pos << endl;
    } else {
        cout << "Substring 'name' not found." << endl;
    }

    // Convert string to integer
    string numberStr = "123";
    int number = stoi(numberStr);

    // Perform arithmetic operation with the converted integer
    int result = number * 2;

    // Convert integer back to string
    string resultStr = to_string(result);

    // Print result
    cout << "Number: " << number << ", Result: " << resultStr << endl;

    return 0;
}
