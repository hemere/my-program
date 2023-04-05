//問題:https://atcoder.jp/contests/arc110/tasks/arc110_c
//提出:https://atcoder.jp/contests/arc110/submissions/18588485
//2020-12-05AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> pn(n);
  for(int i=0; i<n; ++i) cin >> pn[i];
  vector<int> ans(n-1,0);
  int anspos = 0;
  vector<bool> used(n-1, false);
  for(int i=0; i<n-1; ++i){
    if(pn[i] > pn[i+1]){
      int l = i;
      int x = pn[i+1];
      while(l+2 != x){
        //cout << l << " " << x << endl;
        if(l < 0 || (l >= 0 && used[l])){
          cout << -1 << endl;
          return 0;
        }else{
          used[l] = true;
          ans[anspos] = l+1;
          ++anspos;
          swap(pn[l],pn[l+1]);
          --l;
        }
      }
    }
  }
  for(int i=0; i<n; ++i){
    if(pn[i] != i+1){
      cout << -1 << endl;
      return 0;
    }
    if(i < n-1 && ans[i] == 0){
      cout << -1 << endl;
      return 0;
    }
  }
  for(int i=0; i<n-1; ++i){
    printf("%d\n",ans[i]);
  }
}