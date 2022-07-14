#include <iostream>

int main() {
  int A, B;
  char op;

  // fetch input and allocate to variables
  std::cin >> A >> op >> B;
  
  int result = 0; // variable to store the calculation's result

  if (op == '+') {
    result = A + B;
  } else if (op == '-') {
    result = A - B; 
  } else if (op == '*') {
    result = A * B;
  } else {
    result = A / B;
  }

  std::cout << result << std::endl;
}
