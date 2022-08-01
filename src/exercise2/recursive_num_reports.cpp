#include <iostream>
#include <vector>
using namespace std;

// x番の組織が親組織に提出する枚数を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(vector<vector<int>> &children, int x) {
  // (ここに追記して再帰関数を実装する)
  // 引数、返り値、処理内容を決める
  // argument:  list of children of the branch / id num of branch (int n; 0 <= Number of branches)
  // return:    number of reports the branch should submit
  // process:   count number of children + 1
  cout << "searching for children of: " << x << endl;

  // Base case:
  if (children.at(x).size() == 0) {
    // 子組織がないので提出する報告書は1枚で確定
    return 1;
  }

  // process:
  int total_reports_num = 0;

  for (int subbranch : children.at(x)) {
    // recursively sum up numbers of reports to be submitted
    // ここで関数を呼び出しているノード自身についても最終的に一度このループが回るので、
    // ここで1をたしてしまうとうまく動作しない
    total_reports_num += count_report_num(children, subbranch);
    cout << "Total number of reports counted so far: " << total_reports_num << endl;
  }
  total_reports_num += 1; // x番の組織の報告書の枚数(1枚)を足す
  return total_reports_num;
}
 
// これ以降の行は変更しなくてよい
 
int main() {
  int N;
  cin >> N;
 
  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }
 
  // 組織の関係から2次元配列を作る
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }
 
  // 各組織について、答えを出力
  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }
}
