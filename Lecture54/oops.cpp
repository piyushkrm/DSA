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


// Encapsulation 
class Father {  //Class

private:
    string name;
    string fatherName;
    string motherName;
    int age;

public:

    void setName(string n) {
        name = n;
    }

    void setFatherName(string fn) {
        fatherName = fn;
    }

    void setMotherName(string mn) {
        motherName = mn;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    string getFatherName() {
        return fatherName;
    }

    string getMotherName() {
        return motherName;
    }

    int getAge() {
        return age;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Father's Name: " << fatherName << endl;
        cout << "Mother's Name: " << motherName << endl;
        cout << "Age: " << age << endl;
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


    // Encapsulation
    cout << "\nThis is OOPs lecture 55 Encapsulation." << endl;
    Father father;

    // Accessing the member function using setter methods
    father.setName("John Doe");
    father.setFatherName("John");
    father.setMotherName("Jane");
    father.setAge(50);
    
    // Display the father's information
    father.getInfo();

    return 0;
}
