//問題:https://atcoder.jp/contests/arc138/tasks/arc138_c
//提出:https://atcoder.jp/contests/arc138/submissions/30822459
//2022-04-09AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> an(n);
  for(int i=0; i<n; ++i) cin >> an[i];
  long long ansnum = 0;
  vector<int> rif = an;
  sort(rif.begin(),rif.end());
  for(int i=n/2; i<n; ++i) ansnum += rif[i];
  int num = rif[n/2];
  
  int centlef = 0;
  int kari = n/2 -1;
  while(rif[kari] == num){
    --kari;
    ++centlef;
  }
  
  int cnt = 0, minnum = 0, ans = 0;
  for(int i=0; i<n; ++i){
    if(an[i] > num) --cnt;
    else if(an[i] == num && centlef>0){++cnt; --centlef;}
    else if(an[i] == num) --cnt;
    else if(an[i] < num) ++cnt;
    if(cnt < minnum){
      minnum = cnt;
      ans = i+1;
    }
  }
  cout << ans << " " << ansnum << endl;
}