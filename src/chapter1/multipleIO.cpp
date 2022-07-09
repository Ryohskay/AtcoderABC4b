#include <iostream>

int main() {
  int a, b, c;

  std::cin >> a >> b >> c;
  // input can be divided and allocated to variables
  // input is automatically sliced by spaces or line endings
  std::cout << a*b*c << std::endl;
}
