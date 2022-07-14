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
