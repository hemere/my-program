//問題:https://atcoder.jp/contests/abc296/tasks/abc296_a
//提出:https://atcoder.jp/contests/abc296/submissions/40209110
//2023-04-01AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ok = true;
    for(int i=1; i<n; ++i){
        if(s[i-1] == s[i]) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}