#include <iostream>

int main() {
  int num = 0;
  std::cin >> num;

  if (num == 0) {
    std::cerr << "Error: Division by zero is not allowed." << std::endl;
    return 1;
  }

  std::cout << "10 divided by " << num << " is " << 10/num << std::endl;
  return 0;
}

