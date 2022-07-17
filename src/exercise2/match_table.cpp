#include <vector>
#include <iostream>

int main() {
  int N, M;
  std::cin >> N >> M;  // N contestants, M matches

  // each match contains only 2 values (won, lost), thus init w/ vector<int>(2)
  std::vector<std::vector<int>> matches(M, std::vector<int>(2));
  std::vector<std::vector<char>> match_table(N, std::vector<char>(N, '-'));

  // fetch the match results and store them in a vector
  for (int i = 0; i < M; ++i) {
    std::cin >> matches.at(i).at(0)  // the winner 
      >> matches.at(i).at(1);  // the lost
  }

  // grep the results from the vector and place it on the table
  for (int j = 0; j < M; ++j) {
    int winner_id = matches.at(j).at(0);
    int loser_id = matches.at(j).at(1);

    
    match_table.at(winner_id - 1).at(loser_id - 1) = 'o';
    match_table.at(loser_id - 1).at(winner_id - 1) = 'x';
  }

  /* print out the table */
  for (int row = 0; row < N; ++row) {
    for (int col = 0; col < N; ++col) {
      if (col != N-1) { // print a space if not at the end of the table row
        std::cout << match_table.at(row).at(col) << " ";
      } else {
        std::cout << match_table.at(row).at(col);
      }
    }
    std::cout << std::endl;
  }
}
