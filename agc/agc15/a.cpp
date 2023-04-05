//問題:https://atcoder.jp/contests/agc015/tasks/agc015_a
//提出:https://atcoder.jp/contests/agc015/submissions/18066965
//2020-11-12AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  cout << max((ll)0,(n-2)*b -(n-2)*a+1) << endl;;
}