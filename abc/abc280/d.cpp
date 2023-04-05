//問題:https://atcoder.jp/contests/abc280/tasks/abc280_d
//提出:https://atcoder.jp/contests/abc280/submissions/36976528
//2022-12-03AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}

int main(){
    ll n;
    cin >> n;
    ll n_ref = n;
    int cnt = -1;
    for(int i=2; (ll)i*i<=n; ++i){
        n_ref /= gcd(n_ref,i);
        if(n_ref == 1){
            cout << i << endl;
            return 0;
        }
        cnt = i;
    }
    cout << (cnt/n_ref+1)*n_ref << endl;
    return 0;
}