#include <iostream>
#include <vector>

int main() {
  int N, S;
  std::cin >> N >> S;

  std::vector<int> A(N), P(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> A.at(i);  // Apple
  }
  for (int i = 0; i < N; ++i) {
    std::cin >> P.at(i);  // Pineapple
  }

  int counter = 0;
  for (int j = 0; j < N; ++j) {
    for (int k = 0; k < N; ++k) {
      if (A.at(j) + P.at(k) == S) {
        ++counter;
      }
    }
  }

  std::cout << counter << std::endl;
}
