#include <iostream>
#include <string>
 
int main() {
  std::string input_str;
  int position;
  
  std::cin >> input_str >> position;
  
  char extracted;
  extracted = input_str.at(position - 1);
  
  std::cout << extracted << std::endl;
}
