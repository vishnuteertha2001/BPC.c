#include <iostream>

class MyNumber {
public:
    int value;

    MyNumber(int val) : value(val) {}

    // Overload the + operator
    MyNumber operator+(const MyNumber& other) {
        return MyNumber(value + other.value);
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(10);
    MyNumber sum = num1 + num2;  // Calls the overloaded + operator
    std::cout << "Sum: " << sum.value << std::endl;

    return 0;
}

