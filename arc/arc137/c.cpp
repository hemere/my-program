//問題:https://atcoder.jp/contests/arc137/tasks/arc137_c
//提出:https://atcoder.jp/contests/arc137/submissions/30243117
//WA
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int cnt = 0;
  bool f = true;
  vector<int> an(n);
  for(int i=0; i<n; ++i){
    cin >> an[i];
    if(an[i]-(i?an[i-1]:-1) >1 && i<n-2) f = false;
    if(i == n-1 && f){
      if(an[i-1] == n-2 && an[i] == n-1){}
      else if((an[i-1] == n-1 || an[i-1] == n) && an[i] == n+1){}
      else f = false;
    }
  }
  string ans = "Alice";
  if(f) ans = "Bob";
  cout << ans << endl;
}