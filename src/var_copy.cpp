#include <iostream>

int main() {
  int a = 10;
  int b;
  b = a;  // copy value of a and put it in b
  a = 5;  // value of a changed to a, but not of b

  std::cout << a << std::endl;  // 5
  std::cout << b << std::endl;  // 10
}
