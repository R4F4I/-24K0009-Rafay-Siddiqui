/*

? |

Create a C++ program to simulate a zoo management system using inheritance. Define a base class
Animal with private attributes name (string) and age (int), and provide a public method displayInfo() to
display the animal's name and age. Then, create three derived classes: Mammal, Bird, and Reptile, each
inheriting from Animal. The Mammal class should have a method feedBaby() that prints "Feeding baby
mammal," the Bird class should have a method layEgg() that prints "Laying an egg," and the Reptile class
should have a method shedSkin() that prints "Shedding skin." In the main function, create objects for
each derived class, call displayInfo() to display the name and age of each animal, and call the respective
specific methods to demonstrate inheritance and specialized behavior in each derived class.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
private:
    string name;
    int age;

public:
    // Constructor
    Animal(string name, int age) : name(name), age(age) {}

    // Method to display animal info
    void displayInfo() const {
        cout << "Animal Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Mammal
class Mammal : public Animal {
public:
    // Constructor
    Mammal(string name, int age) : Animal(name, age) {}

    // Method specific to Mammal
    void feedBaby() const {
        cout << "Feeding baby mammal." << endl;
    }
};

// Derived class Bird
class Bird : public Animal {
public:
    // Constructor
    Bird(string name, int age) : Animal(name, age) {}

    // Method specific to Bird
    void layEgg() const {
        cout << "Laying an egg." << endl;
    }
};

// Derived class Reptile
class Reptile : public Animal {
public:
    // Constructor
    Reptile(string name, int age) : Animal(name, age) {}

    // Method specific to Reptile
    void shedSkin() const {
        cout << "Shedding skin." << endl;
    }
};

int main() {
    // Create objects for each derived class
    Mammal mammal("Elephant", 10);
    Bird bird("Parrot", 2);
    Reptile reptile("Snake", 5);

    // Display info and call specific methods
    mammal.displayInfo();
    mammal.feedBaby();

    bird.displayInfo();
    bird.layEgg();

    reptile.displayInfo();
    reptile.shedSkin();

    return 0;
}