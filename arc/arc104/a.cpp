//問題:https://atcoder.jp/contests/arc104/tasks/arc104_a
//提出:https://atcoder.jp/contests/arc104/submissions/17158683
//2020-10-03AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int x = (a+b)/2;
  int y = a -x;
  cout << x << " " << y << endl;
}