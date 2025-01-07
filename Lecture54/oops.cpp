/**
 * This program demonstrates the use of classes and objects in C++.
 * It defines a `Teacher` class with attributes like `name`, `department`, `salary`, and `id`,
 * and includes a method to display the information of a teacher.
 */

#include <iostream>
using namespace std;

// Teacher class declaration
class Teacher {
public: // Access Modifier
    string name;        // Name of the teacher
    string department;  // Department of the teacher
    double salary;      // Salary of the teacher
    int id;             // ID of the teacher

    // Method to display teacher information
    void getInformation() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;  // Fixed missing colon
        cout << "ID: " << id << endl;
    }
};

int main() {
    cout << "This is OOPs lecture 54." << endl;

    // Create an object of the Teacher class
    Teacher teacher;

    // Assign values to teacher object
    teacher.name = "Piyushu";
    teacher.department = "Teaching";
    teacher.salary = 250000;  // Fixed spacing for readability
    teacher.id = 123;

    // Display the teacher's information
    teacher.getInformation();

    return 0;
}
