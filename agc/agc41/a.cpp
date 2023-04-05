//問題:https://atcoder.jp/contests/agc041/tasks/agc041_a
//提出:https://atcoder.jp/contests/agc041/submissions/15553644
//2020-07-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  if(abs(a-b)%2 == 0){
    cout << abs(a-b) /2 << endl;
  }else{
    ll ans = min(min(a-1,n-a),min(b-1,n-b));
    ans += abs(a-b) /2 +1;
    cout << ans << endl;
  }
}