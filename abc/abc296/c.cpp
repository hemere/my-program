//問題:https://atcoder.jp/contests/abc296/tasks/abc296_c
//提出:https://atcoder.jp/contests/abc296/submissions/40229361
//2023-04-01AC
#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
    int n, x;
    cin >> n >> x;
    map<int,int> mp, ref_mp;
    for(int i=0; i<n; ++i){
        int ai;
        cin >> ai;
        mp[ai]++;
    }
    ref_mp = mp;
    for(P a:mp){
        if(ref_mp[a.first + x]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}