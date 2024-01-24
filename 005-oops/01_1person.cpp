#include <iostream>

using namespace std;

// Define a class called 'Person'
class Person {
    public:
        // Member variables (attributes)
        string name;
        int age;

        // Member function (method)
        void displayInfo() {
            cout << "Name: " << name << ", Age: " << age << " years" << endl;
        }
};

int main() {
    // Create an object of the 'Person' class
    Person person1;

    // Set values for the object's attributes
    person1.name = "Varun";
    person1.age = 19;

    // Call the member function to display information
    cout << "Information about person1:" << endl;
    person1.displayInfo();

    /*
    
    // Create another object of the 'Person' class
    Person person2;
    
    // Set values for the second object's attributes
    person2.name = "Your_name";
    person2.age = 19;

    // Call the member function to display information
    cout << "\nInformation about person2:" << endl;
    person2.displayInfo();

    *
    */

    return 0;
}

