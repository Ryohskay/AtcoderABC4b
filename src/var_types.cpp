#include <iostream>

int main() {
  int i = 10;
  double d = i; // double and int can be swapped
  std::string s = "Hello";

  // i = s; -> Compile error, 
  // int cannot hold string type value
  
  std::cout << i << std::endl;
  std::cout << s << std::endl;
}
