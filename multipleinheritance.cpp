#include <iostream>
#include <string>

using namespace std;

// Base class 1: Shape
class Shape {
public:
    void draw() {
         cout << "Drawing a shape!" <<  endl;
    }
};

// Base class 2: Color
class Color {

private:
     string colorValue;

public:
    void setColor(string color) {
        colorValue = color;
    }

    void displayColor() {
         cout << "Color: " << colorValue <<  endl;
    }

};

// Derived class: Circle
class Circle : public Shape, public Color {
public:
    void displayInfo() {
        cout << "Circle with ";
        displayColor();
        draw();
    }
};

int main() {
    // Create an object of derived class Circle
    Circle circle;

    // Set color and display information
    circle.setColor("Red");
    circle.displayInfo(); // Output: Circle with Color: Red \n Drawing a shape!

    return 0;
}

