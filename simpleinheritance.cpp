#include <iostream>

// Base class
class Animal {
public:
    void speak() {
        std::cout << "Animal speaks!" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks!" << std::endl;
    }
};

int main() {
    // Create an object of derived class Dog
    Dog dog;

    // Call member functions from both base and derived class
    dog.speak(); // Output: Animal speaks!
    dog.bark();  // Output: Dog barks!

    return 0;
}

