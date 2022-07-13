#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // prepare N and A
  int N, A;
  cin >> N >> A;

  // define a variable to stores the calculation results
  int result = A;
  
  for (int i = 0; i < N; ++i) {
    string op;
    int B;
    cin >> op >> B;

    if (op == "+") {
      result += B;
      cout << i + 1 << ":" << result << endl;
    } else if (op == "-") {
      result -= B;
      cout << i + 1 << ":" << result << endl;
    } else if (op == "*") {
      result *= B;
      cout << i + 1 << ":" << result << endl;
    } else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        break;
      } else {
        result /= B;
        cout << i + 1 << ":" << result << endl;
      }
    }
  }
}
