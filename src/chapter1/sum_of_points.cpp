#include <iostream>

int main() {
  // Get numbers of players from the user
  std::cout << "Number of players?" << std::endl;
  int N;
  std::cin >> N;

  // initialise variables
  int sum = 0;  // sum of points
  int x;  // value to hold the input
  int i = 0;  // counter

  while (i < N) {
    ++i;
    std::cout << i << "th player?" << std::endl;
    std::cin >> x;
    sum += x;
  }

  std::cout << "The sum of points is: " << sum << std::endl;
}
