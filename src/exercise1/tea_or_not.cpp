#include <string>
#include <iostream>

int main() {
  std::string input;

  std::cin >> input;

  char last_char
    = input.at(input.size() - 1);

  if (last_char == 'T') {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}
