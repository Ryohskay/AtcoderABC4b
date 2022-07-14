#include <iostream>
#include <vector>
#include <string>

int main() {
  // fetch number of positive (blue) cards
  int num_blue_cards, num_red_cards;

  // Blue Cards
  std::cin >> num_blue_cards;

  // initialise a vector to store the strings on blue cards
  std::vector<std::string> blue_cards(num_blue_cards);

  // TODO: WRAP this into a function
  for (int i = 0; i < num_blue_cards; ++i) {
    std::cin >> blue_cards.at(i);  // fetch string for each column of the vector
  }

  // Red Cards
  std::cin >> num_red_cards;

  // initialise a vector to store the strings on red cards
  std::vector<std::string> red_cards(num_red_cards);

  for (int i = 0; i < num_red_cards; ++i) {
    std::cin >> red_cards.at(i);  // fetch string for each column of the vector
  }



  // initialise vectors to use as a counter table
  std::vector<int> counter(num_blue_cards);


  // count the words on blue cards that outnumbers the same words on red cards
  for (int idx = 0; idx < num_blue_cards; ++idx) { // for each word in blue_cards
    std::string searching_for = blue_cards.at(idx);  // the string to search for

    for (int i = 0; i < num_blue_cards; ++i) {
      if (searching_for == blue_cards.at(i)) {
        ++counter.at(idx);
      }
    }

    for (int j = 0; j < num_red_cards; ++j) {
      if (searching_for == red_cards.at(j)) {
        --counter.at(idx);
      }
    }
  }


  // find the largest of values in counter (most profitable word)
  int largest_yield = 0;

  for (int k = 0; k < num_blue_cards; ++k) {
    if (counter.at(k) > largest_yield) {
      largest_yield = counter.at(k);  // overwrite the largest value
    }
  }

  std::cout << largest_yield << std::endl;
}

