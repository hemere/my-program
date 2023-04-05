//問題:https://atcoder.jp/contests/abc282/tasks/abc282_b
//提出:https://atcoder.jp/contests/abc282/submissions/37329492
//2022-12-17AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> sn(n);
    for(int i=0; i<n; ++i) cin >> sn[i];
    int ans = 0;
    for(int i=0; i<n-1; ++i) for(int j=i+1; j<n; ++j){
        bool ok = true;
        for(int k=0; k<m; ++k){
            if(sn[i][k] == 'x' && sn[j][k] == 'x') ok = false;
        }
        if(ok) ++ans;
    }
    cout << ans << endl;
}