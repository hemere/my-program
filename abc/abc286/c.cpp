//問題:https://atcoder.jp/contests/abc286/tasks/abc286_c
//提出:https://atcoder.jp/contests/abc286/submissions/38206152
//2023-01-21AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1001001001001001001;

int main(){
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    ll ans = INF;
    for(int i=0; i<n; ++i){
        int l = i;
        int r = (i==0? n-1:i-1);
        int cnt = 0;
        for(int j=0; j<n/2; ++j){
            int nl = l+j;
            if(nl > n) nl -= n;
            int nj = r-j;
            if(nj < 0) nj += n;
            if(s[nl] != s[nj]) ++cnt;
        }
        ans = min(ans, (ll)b*cnt+(ll)i*a);
    }
    cout << ans << endl;
}