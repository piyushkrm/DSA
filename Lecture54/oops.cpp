/**
 * This program demonstrates the use of classes and objects in C++.
 * It defines a `Teacher` class with attributes like `name`, `department`, `salary`, and `id`,
 * and includes a method to display the information of a teacher.
 * It also demonstrates encapsulation by using private data members with getter and setter methods.
 * The program further demonstrates the use of constructors.
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

    // Setter for passKey (Encapsulation)
    void setPasskey(string key) {
        passKey = key;
    }

    // Getter for passKey (Encapsulation)
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

// Encapsulation example in the Father class
class Father {
private:
    string name;
    string fatherName;
    string motherName;
    int age;

public:
    // Setter methods to set private data
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

    // Getter methods to access private data
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

    // Method to display information
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Father's Name: " << fatherName << endl;
        cout << "Mother's Name: " << motherName << endl;
        cout << "Age: " << age << endl;
    }
};

// Constructor example with Car class
class Car {
private:
    double price; // Private price attribute

public:
    string name;  // Car name
    string model; // Car model
    int year;     // Manufacturing year
    string color; // Car color

    // Constructor
    Car() {
        cout << "I am a constructor for Car." << endl;
    }

    // Setter method for price
    void setPrice(double p) {
        price = p;
    }

    // Getter method for price
    double getPrice() {
        return price;
    }

    // Method to display car information
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << endl;
        cout << "Price (using getter): " << getPrice() << endl; // Use getter for price
    }
};

// Main function demonstrating the use of classes and objects
int main() {
    cout << "This is OOPs lecture 54." << endl;

    // Create an object of the Teacher class and set values
    Teacher teacher;
    teacher.name = "Piyushu";
    teacher.department = "Teaching";
    teacher.salary = 250000;
    teacher.id = 123;

    // Set the private passkey using setter method
    teacher.setPasskey("piyushuu");

    // Display the teacher's information
    teacher.getInformation();

    // Demonstrating Encapsulation in the Father class
    cout << "\nThis is OOPs lecture 55 Encapsulation." << endl;
    Father father;

    // Accessing the member function using setter methods
    father.setName("John Doe");
    father.setFatherName("John");
    father.setMotherName("Jane");
    father.setAge(50);

    // Display the father's information
    father.getInfo();

    // Demonstrating Constructor in the Car class
    cout << "\nThis is OOPs lecture 55 Constructor." << endl;
    Car car;

    // Assign values to the car object
    car.name = "Toyota";
    car.model = "Camry";
    car.year = 2021;
    car.color = "Red";

    // Set the price using setter method
    car.setPrice(250000);

    // Display the car's information
    car.getInfo();

    return 0;
}
