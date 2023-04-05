//問題:https://atcoder.jp/contests/abc286/tasks/abc286_d
//提出:https://atcoder.jp/contests/abc286/submissions/38209677
//2023-01-21AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<bool> ok(x+1,false);
    ok[0] = true;
    for(int i=0; i<n; ++i){
        int ai, bi;
        cin >> ai >> bi;
        for(int k=x-1; k>=0; --k){
            if(!ok[k]) continue;
            for(int j=1; j<=bi; ++j) {
                if(k+ai*j > x) break;
                ok[k+ai*j] = true;
            }
        }
    }
    if(ok[x]) cout << "Yes" << endl;
    else cout << "No" << endl;
}