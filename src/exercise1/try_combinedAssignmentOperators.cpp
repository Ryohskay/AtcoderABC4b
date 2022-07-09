#include <iostream>
#include <ostream>

int main() {
  int x, a, b;
  std::cin >> x >> a >> b;
 
  // output for 1
  x++;
  std::cout << x << std::endl;
 
  // output for 2
  x *= (a+b);
  std::cout << x << std::endl;

  // output for 3
  x *= x;
  std::cout << x << std::endl;

  // output for 4
  x--;
  std::cout << x << std::endl;
}
