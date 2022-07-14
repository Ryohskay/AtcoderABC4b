#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int A, B, C;
  std::cin >> A >> B >> C;

  std::vector<int> heights = {A, B, C};
  sort(heights.begin(), heights.end());

  int difference = heights.at(2) - heights.at(0);

  std::cout << difference << std::endl;
}

