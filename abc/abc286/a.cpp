//問題:https://atcoder.jp/contests/abc286/tasks/abc286_a
//提出:https://atcoder.jp/contests/abc286/submissions/38194925
//2023-01-21AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    --p; --q; --r; --s;
    vector<int> an(n);
    for(int i=0; i<n; ++i) cin >> an[i];
    for(int i=0; i<q-p+1; ++i){
        swap(an[p+i],an[r+i]);
    }
    for(int i=0; i<n; ++i) cout << an[i] << " ";
    cout << endl;
}