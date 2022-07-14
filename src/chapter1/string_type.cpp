#include <iostream>
#include <string>

int main() {
  std::string str1, str2;
  std::cin >> str1;
  str2 = ", WORLD!";

  std::cout << str1 << str2 << std::endl;
  std::cout << "@0 " << str2.at(0) << std::endl;  // @0 ,
}
