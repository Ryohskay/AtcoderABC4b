#include <iostream>

// reference to variables

int main() {
  int a = 3;
  int &b = a;  // b is a reference to variable a
  
  std::cout << "a: " << a << std::endl;  // 3
  std::cout << "b: " << b << std::endl;  // 3 (value of a)

  b = 4;  // change the value of referred variable (a becomes 4)

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
}
