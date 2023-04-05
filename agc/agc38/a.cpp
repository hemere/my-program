//問題:https://atcoder.jp/contests/agc038/tasks/agc038_a
//提出:https://atcoder.jp/contests/agc038/submissions/14483739
//2020-06-20
#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w, a, b;
  cin >> h >> w >> a >> b;
  bool rv = false;
  for(int i=0; i<h; ++i){
    if(i >= h-b) rv = true;
    for(int j=0; j<w; ++j){
      if(j < a && !rv) cout << 1;
      if(j >= a && !rv) cout << 0;
      if(j < a && rv) cout << 0;
      if(j >= a && rv) cout << 1;
    }
    cout << endl;
  }
}