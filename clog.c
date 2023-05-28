#include <iostream>

int main() {
  int num = 0;
  std::cin >> num;

  std::clog << "User entered " << num << std::endl;

  std::cout << "10 divided by " << num << " is " << 10/num << std::endl;
  return 0;
}

