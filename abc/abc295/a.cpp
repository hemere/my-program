//問題:https://atcoder.jp/contests/abc295/tasks/abc295_a
//提出:https://atcoder.jp/contests/abc295/submissions/40023652
//2023-03-25AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool frag = false;
    for(int i=0; i<n; ++i){
        string nw;
        cin >> nw;
        if(nw == "and" || nw == "not" || nw == "that" || nw == "the" || nw == "you") frag = true;
    }
    if(frag) cout << "Yes" << endl;
    else cout << "No" << endl;
}