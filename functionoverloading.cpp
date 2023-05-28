#include <iostream>

// Function with no parameters
void print() {
    std::cout << "No arguments" << std::endl;
}

// Function with one integer parameter
void print(int x) {
    std::cout << "Integer argument: " << x << std::endl;
}

// Function with two integer parameters
void print(int x, int y) {
    std::cout << "Two integer arguments: " << x << ", " << y << std::endl;
}

int main() {
    print();          // Calls print() with no arguments
    print(42);        // Calls print(int) with one argument
    print(10, 20);    // Calls print(int, int) with two arguments

    return 0;
}

