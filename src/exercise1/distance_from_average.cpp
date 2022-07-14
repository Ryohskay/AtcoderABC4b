#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum, average;
  cin >> N;  // number of students

  vector<int> scores(N);  // vector to store scores of students

  for (int i = 0; i < N; ++i) {
    std::cin >> scores.at(i);  // overwrite the value at i of scores with input
    
    sum += scores.at(i);  // sum up the scores
  } 

  // Calculate the average
  average = sum / N;

  for (int i = 0; i < N; ++i) {
    int difference;  // declare a var to store the difference

    if (scores.at(i) >= average) {
      difference = scores.at(i) - average;
    } else {
      difference = average - scores.at(i);
    }

    cout << difference << endl;
  }
}
