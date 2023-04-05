//問題:https://atcoder.jp/contests/abc296/tasks/abc296_e
//提出:https://atcoder.jp/contests/abc296/submissions/40268144
//2023-04-01AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> an(n);
    for(int i=0; i<n; ++i){
        cin >> an[i];
        --an[i];
    }
    vector<int> cnt(n,-1), cnt2(n,-1);
    int ans = 0;
    for(int i=0; i<n; ++i){
        if(cnt[i] != -1) continue;
        int npos = i;
        cnt[npos] = 0;
        cnt2[npos] = i;
        while(cnt2[an[npos]] == -1){
            cnt[an[npos]] = cnt[npos] +1;
            npos = an[npos];
            cnt2[npos] = i;
        }
        if(cnt2[an[npos]] == cnt2[npos]){
            ans += cnt[npos] - cnt[an[npos]] +1;
        }
    }
    cout << ans << endl;
}