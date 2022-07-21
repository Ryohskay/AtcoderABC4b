# 2.01 loops and range for loops

- ループ処理を書くときの3ステップ
    - ループを使わずに書く
    - パターンを見つける
    - ループで書き直す

### Range `for` Loops
[Microsoft's documentation](https://docs.microsoft.com/en-us/cpp/cpp/range-based-for-statement-cpp?view=msvc-170)
配列の要素を取り出しながらループする範囲for文:

```
for (配列の要素の型 変数名 : 配列変数) {
  // 各要素に対する処理
}
```

#### E.G.

```cpp
#include <bits/stdc++.h>
using namespace std;
     
int main() {
  vector<int> a = {1, 3, 2, 5};
  for (int i = 0; i < a.size(); i++) {
    cout << a.at(i) << endl;
  }
}
```

is equivalent to

```cpp
#include <bits/stdc++.h>
using namespace std;
     
int main() {
  vector<int> a = {1, 3, 2, 5};
  for (int x : a) {
    cout << x << endl;
  }
}
```

# 2.04 Reference
The reference syntax is simple.

- Definition of refence variable 
```
int a = 50;
int &b = a;  // reference
```

NB:
- The variable referred to must be explicitly specified at initialisation/declaration.
- The variable which we refer to cannot be change once declared.
- Multiple reference variables can be pointed to the same variable (e.g. `&b` and `&c` both referring to `a`)

Outstanding behaviour:
- Pass VALUE to function(s)

```cpp
#include <bits/stdc++.h>
  using namespace std;

  int fn(int x) {
    x = x * 2;  // multiply by 2
    return x;  // return the value of x
  }

int main() {
  int a = 3;  // the variable to be "called"
  int b = fn(a);  // give the VALUE of a to fn(), put the value into b

  cout << "a: " << a << endl;  // "a: 3"
  cout << "b: " << b << endl;  // "b: 6"
}
```

- Pass REFERENCE to function(s)
```cpp
#include <bits/stdc++.h>
  using namespace std;

  int g(int &x) {
    x = x * 2;  // multiply by 2
    return x;  // return the value of x
  }

int main() {
  int a = 3;  // the variable to be "referred" to
  int b = g(a);  // x (in the definition of g()) is now referring to "a"

  cout << "a: " << a << endl;  // "a: 6"
  cout << "b: " << b << endl;  // "b: 6"
}
```
