//問題:https://atcoder.jp/contests/abc295/tasks/abc295_c
//提出:https://atcoder.jp/contests/abc295/submissions/40039288
//2023-03-25AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    map<int,int> mp;
    for(int i=0; i<n; ++i){
        int ai;
        cin >> ai;
        if(mp[ai]){
            mp[ai]--;
            ++ans;
        }else{
            mp[ai]++;
        }
    }
    cout << ans << endl;
}