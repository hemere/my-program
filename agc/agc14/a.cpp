//問題:https://atcoder.jp/contests/agc014/tasks/agc014_a
//提出:https://atcoder.jp/contests/agc014/submissions/18074000
//2020-11-13AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int cnt = 0;
  while(a%2 == 0 && b%2 == 0 && c%2 == 0){
    if(a == b && b == c){
      cout << -1 << endl;
      return 0;
    }
    int na = b/2 + c/2;
    int nb = a/2 + c/2;
    int nc = a/2 + c/2;
    a = na;
    b = nb;
    c = nc;
    ++cnt;
  }
  cout << cnt << endl;
}