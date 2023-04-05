//問題:https://atcoder.jp/contests/abc262/tasks/abc262_a
//提出:https://atcoder.jp/contests/abc262/submissions/33659253
//2022-07-31AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int y;
  cin >> y;
  for(int i=y; i<=y+4; ++i){
    if(i%4 == 2){
      cout << i << endl;
      return 0;
    }
  }
}