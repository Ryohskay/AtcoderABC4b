#include <iostream>
#include <vector>

int main() {
  std::vector<int> a = {1, 3, 2, 5};

  for (int x : a) {
    std::cout << x << std::endl;
  }

  /* equivalent of python:
   *
   * for x in a:
   *   print(x)
   */
}
