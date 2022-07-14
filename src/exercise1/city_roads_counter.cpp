#include <iostream>
#include <vector>

int main() {
  int N, M;  // N = number of cities; M = number of roads;
  std::cin >> N >> M;

  std::vector<int> counter(N);  
  // use each column of this vector as a counter for each city

  for (int i = 0; i < M; ++i) {
    int first_city, second_city;  // initialise container for city id numbers

    std::cin >> first_city >> second_city;

    // increment the counter at column corresponding to the city id
    ++counter.at(first_city-1);
    ++counter.at(second_city-1); 
  }

  for (int i = 0; i < N; ++i) {
    std::cout << counter.at(i) << std::endl;
  }
}
