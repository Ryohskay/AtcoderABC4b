#include <iostream>
#include <vector>

int main() {
  std::vector<int> data(5);
  for (int i = 0; i < 5; ++i) {
    std::cin >> data.at(i);
  }

  bool has_continuous_data = false;

  for (int i = 1; i < data.size(); ++i) {
    int last = data.at(i - 1);
    int now = data.at(i);
    
    if (last == now) {
      has_continuous_data = true;
      break;
    }
  }

  if (has_continuous_data) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}
