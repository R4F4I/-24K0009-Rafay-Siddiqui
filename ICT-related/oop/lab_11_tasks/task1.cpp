/*
? |Create a C++ program that defines a base class Person with private attributes name (string) and age (int),
? |and public getter and setter methods to access these attributes. The Person class should include a virtual
? |displayInfo() method to display name and age. Define two derived classes, Employee and Student, which
? |inherit from Person. The Employee class should add a private attribute employeeID (int) and override the
? |displayInfo() method to display name, age, and employeeID. Similarly, the Student class should add a private
? |attribute studentID (int) and override displayInfo() to include the studentID in the output. In the main
? |function, create objects of Person, Employee, and Student and call displayInfo() on each object directly.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(const string &name, int age) : name(name), age(age) {}

    // Getter and Setter for name
    string getName() const { return name; }
    void setName(const string& name) { this->name = name; }

    // Getter and Setter for age
    int getAge() const { return age; }
    void setAge(int age) { this->age = age; }

    // Virtual method to display information
    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    int employeeID;

public:
    // Constructor
    Employee(const string& name, int age, int employeeID)
        : Person(name, age), employeeID(employeeID) {}

    // Override displayInfo
    void displayInfo() const override {
        Person::displayInfo(); // Call base class method
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    // Constructor
    Student(const string& name, int age, int studentID)
        : Person(name, age), studentID(studentID) {}

    // Override displayInfo
    void displayInfo() const override {
        Person::displayInfo(); // Call base class method
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    // Create a Person object
    Person person("John Doe", 30);
    person.displayInfo();

    // Create an Employee object
    Employee employee("Jane Smith", 28, 12345);
    employee.displayInfo();

    // Create a Student object
    Student student("Alice Johnson", 20, 67890);
    student.displayInfo();

    return 0;
}


