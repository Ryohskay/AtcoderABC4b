#include <bits/stdc++.h>
using namespace std;

void print_bars(int limit) {
  int i = 0;  // initialise a counter
  while (i < limit) {
    cout << "]";  // visual bar for the cli chart
    ++i;
  }
}
 
int main() {
  int A, B;
  cin >> A >> B;
 
  cout << "A:";
  print_bars(A);
  cout << endl;

  cout << "B:";
  print_bars(B);
  cout << endl;
}

