#include <iostream>
#include <string>

int main() {
  std::string first, second, last;

  // get input and devide it into three variables
  std::cin >> first >> second >> last;

  // print the acronym
  std::cout << 'A' << second.at(0) << 'C' << std::endl;
}
