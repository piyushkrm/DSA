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

    // Constructor --> Non parameters constructor
    Car() {
        cout << "I am a constructor for Car." << endl;
    }

    // Parameters constructor
    Car(string n, string m, int y, string c, double p) {
        cout << "\nI am a Parameters-constructor for Car." << endl;
        name = n;
        model = m;
        year = y;
        color = c; 
        price = p;
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

// This pointer
class Animals {
    public:
        string color;
        string type;
        double price;
        string gender;

        Animals(string color, string type, double price, string gender) {
            cout << "I am a constructor for Animals." << endl;
            cout << "I am this pointer" << endl;
            this->color = color;
            this->type = type;
            this->price = price;
            this->gender = gender;
        }

        void getInfo() {
            cout << "Color: " << color << endl;
            cout << "Type: " << type << endl;
            cout << "Price: " << price << endl;
            cout << "Gender: " << gender << endl;
        }
};

// Copy Constructor
class Phone {
    public:
        string name;
        string model;
        double price;
        int year;
        string brand;


        Phone() {
            cout << "\nI am a constructor for Phone." << endl;
        }

        Phone(const Phone& phone) {
            cout << "\nI am a Copy constructor for Phone." << endl;
            name = phone.name;
            model = phone.model;
            price = phone.price;
            year = phone.year;
            brand = phone.brand;
        }

        void getDetails() {
            cout << "Name: " << name << endl;
            cout << "Model: " << model << endl;
            cout << "Price: " << price << endl;
            cout << "Year: " << year << endl;
            cout << "Brand: " << brand << endl;
        }
};


// Inheritance
class GrandParent {
public:
    string name;
    int age;

    GrandParent(string name, int age) {
        cout << "I am a GrandParent." << endl;
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "GrandParent - Name: " << name << endl;
        cout << "GrandParent - Age: " << age << endl;
    }
};

class Parent : public GrandParent {
public:
    string occupation;

    Parent(string name, int age, string occupation) : GrandParent(name, age) {
        cout << "\nI am a Parent." << endl;
        this->occupation = occupation;
    }

    void display() {
        GrandParent::display();  // Call GrandParent's display method
        cout << "Parent - Occupation: " << occupation << endl;
    }
};

class Child : public GrandParent {
public:
    string school;

    Child(string name, int age, string school) : GrandParent(name, age) {
        cout << "\nI am a Child." << endl;
        this->school = school;
    }

    void display() {
        GrandParent::display();  // Call GrandParent's display method
        cout << "Child - School: " << school << endl;
    }
};

class GrandChild : public Child, public Parent {
public:
    string hobby;

    GrandChild(string name, int age, string school, string occupation, string hobby) 
    : Child(name, age, school), Parent(name, age, occupation) {
        cout << "\nI am a GrandChild." << endl;
        this->hobby = hobby;
    }

    void display() {
        // You need to specify which base class's display function to call
        Parent::display(); // Calls Parent's display method (and calls GrandParent display via Parent)
        cout << "GrandChild - Hobby: " << hobby << endl;
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

    // Parameter constructor
    // Create a Car object using the parameterized constructor
    Car myCar("Toyota", "Corolla", 2021, "Red", 25000);
    // Now the myCar object has been initialized with these values
    myCar.getInfo(); // This will display the car's information


    // This pointer
    cout << "\nThis is OOPs lecture 55 This pointer." << endl;
    Animals animal("Black", "Cat", 150, "Male");
    animal.getInfo();


    // Copy constructor
    Phone phone;
    phone.name = "iPhone 13 Pro Max";
    phone.model = "A2224";
    phone.price = 120000;
    phone.year = 2021;
    phone.brand = "Apple";
    phone.getDetails();

    Phone phone1(phone);
    phone1.getDetails(); // This will display the phone's information using the copy constructor


    // Inheritance
    cout << "\nThis is OOPs lecture 55 Inheritance." << endl;
    // GrandParent grandParent("John Doe", 70);
    // grandParent.display(); // This will display only GrandParent's information.

    //Single level inherited
    // Parent parent("John Doe", 70, "Engineer");
    // parent.display(); // This will display both GrandParent and Parent's information.

    // Multilevel inherited
    // Child child("John Doe", 70, "Engineer", "12th");
    // child.display(); // This will display Child's information.

    // Multiple inheritance
    GrandChild grandChild("John Doe", 70, "Engineer", "12th", "Reading");
    grandChild.display(); // This will display GrandChild's, Parent's, and GrandParent's information.


    return 0;
}
