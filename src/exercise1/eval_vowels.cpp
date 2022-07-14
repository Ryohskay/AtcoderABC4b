#include <iostream>

int main(){
  char C;
  std::cin >> C;

  if (C != 'a'
    && C != 'e'
    && C != 'i'
    && C != 'o'
    && C != 'u') {
      std::cout << "consonant" << std::endl;
    } else {
      std::cout << "vowel" << std::endl;
    }
}
