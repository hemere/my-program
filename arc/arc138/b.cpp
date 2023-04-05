//問題:https://atcoder.jp/contests/arc138/tasks/arc138_b
//提出:https://atcoder.jp/contests/arc138/submissions/30813182
//2022-04-09AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> an(n);
  for(int i=0; i<n; ++i) cin >> an[i];
  int l=0, r=n-1;
  bool flip = false;
  while(an[r] == flip) --r;
  while(l <= r){
    if(l == r && an[r] == flip) break;
    else if(an[l] == flip && an[l+1] != flip){
      flip = (!flip);
      ++l;
    }else{
      cout << "No" << endl;
      return 0;
    }
    while(an[r] == flip) --r;
  }
  cout << "Yes" << endl;
}