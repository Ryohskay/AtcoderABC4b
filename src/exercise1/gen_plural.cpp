#include <iostream>
#include <string>

int main() {
  std::string word;

  std::cin >> word;  // fetch the word
  
  // add 's' at the end
  std::string plural = word + 's';

  std::cout << plural << std::endl;
}
