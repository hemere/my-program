//問題:https://atcoder.jp/contests/arc135/tasks/arc135_b
//提出:https://atcoder.jp/contests/arc135/submissions/31809614
//2022-05-20AC
#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main(){
  int n;
  cin >> n;
  vector<int> sn(n);
  for(int i=0; i<n; ++i) cin >> sn[i];
  vector<int> ans(n+2);
  vector<int> minv(3,0);
  for(int i=0; i<n+2; ++i){
    if(i<3) ans[i] = 0;
    else{
      ans[i] = ans[i-3] + sn[i-2]-sn[i-3];
      if(ans[i] > INF){
        cout << "No" << endl;
        return 0;
      }
      if(ans[i] < minv[i%3]){
        minv[i%3] = ans[i];
      }
    }
  }
  int base = minv[0] +minv[1] +minv[2];
  base *= -1;
  if(base > sn[0]){
    cout << "No" << endl;
    return 0;
  }else{
    cout << "Yes" << endl;
    for(int i=0; i<n+2; ++i){
      int num;
      if(i%3 == 0) num = ans[i]-minv[i%3] +(sn[0]-base);
      else num = ans[i]-minv[i%3];
      if(i != n+1) cout << num << " ";
      else cout << num << endl;
    }
  }
}