//問題:https://atcoder.jp/contests/arc106/tasks/arc106_a
//提出:https://atcoder.jp/contests/arc106/submissions/17611689
//2020-10-24AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n;
  cin >> n;
  ll n3 = 3;
  for(int i=1; ; ++i){
    if(n3 >= n) break;
    ll num = n-n3;
    int cnt = 0;
    while(num % 5 == 0 && num > 0){
      ++cnt;
      num /= 5;
      if(num == 1){
        cout << i << " " << cnt << endl;
        return 0;
      }
    }
    n3 *= 3;
  }
  cout << -1 << endl;
}