//問題:https://atcoder.jp/contests/abc260/tasks/abc260_d
//提出:https://atcoder.jp/contests/abc260/submissions/33656343
//2022-07-31AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> v(n,-1);
  vector<int> ans(n, -1);
  set<int> st;
  for(int i=0; i<n; ++i){
    int pi;
    cin >> pi;
    --pi;
    auto it = st.lower_bound(pi);
    if(it == st.end()){
      if(k == 1) ans[pi] = i+1;
      else st.insert(pi);
      continue;
    }
    int num = *it;
    ans[pi] = ans[num] -1;
    v[pi] = num;
    st.erase(num);
    st.insert(pi);
    if(ans[pi] == k *(-1)){
      int nnum = pi;
      while(nnum != -1){
        ans[nnum] = i+1;
        nnum = v[nnum];
      }
      st.erase(pi);
    }
  }
  for(int i=0; i<n; ++i){
    if(ans[i] < 0) cout << -1 << endl;
    else cout << ans[i] << endl;
  }
}