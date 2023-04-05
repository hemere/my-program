//問題:https://atcoder.jp/contests/abc260/tasks/abc260_c
//提出:https://atcoder.jp/contests/abc260/submissions/33654824
//2022-07-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, x, y;
  cin >> n >> x >> y;
  ll red = 1, brue = 0;
  for(int i=1; i<n; ++i){
    ll nred = 0, nbrue = 0;
    nred += red;
    brue += red *x;
    nred += brue;
    nbrue += brue *y;
    red = nred;
    brue = nbrue;
  }
  cout << brue << endl;
}