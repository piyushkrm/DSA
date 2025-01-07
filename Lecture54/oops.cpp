/**
 * This program demonstrates the use of classes and objects in C++.
 * It defines a `Teacher` class with attributes like `name`, `department`, `salary`, and `id`,
 * and includes a method to display the information of a teacher.
 * It also demonstrates encapsulation by using private data members with getter and setter methods.
 */

#include <iostream>
using namespace std;

// Teacher class declaration
class Teacher {
private:
    string passKey; // Private password attribute

public:
    string name;        // Name of the teacher
    string department;  // Department of the teacher
    double salary;      // Salary of the teacher
    int id;             // ID of the teacher

    // Setter for passKey
    void setPasskey(string key) {
        passKey = key;
    }

    // Getter for passKey
    string getPasskey() {
        return passKey;
    }

    // Method to display teacher information
    void getInformation() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "ID: " << id << endl;
        cout << "Passkey (using getter): " << getPasskey() << endl; // Use getter for passKey
    }
};

int main() {
    cout << "This is OOPs lecture 54." << endl;

    // Create an object of the Teacher class
    Teacher teacher;

    // Assign values to teacher object
    teacher.name = "Piyushu";
    teacher.department = "Teaching";
    teacher.salary = 250000;
    teacher.id = 123;

    // Set the private passkey
    teacher.setPasskey("piyushuu");

    // Display the teacher's information
    teacher.getInformation();

    return 0;
}
