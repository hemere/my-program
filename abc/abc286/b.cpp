//問題:https://atcoder.jp/contests/abc286/tasks/abc286_b
//提出:https://atcoder.jp/contests/abc286/submissions/38200515
//2023-01-21AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i=n-2; i>=0; --i){
        if(s[i] == 'n' && s[i+1] == 'a'){
            s = s.substr(0,i) + "nya" + s.substr(i+2);
        }
    }
    cout << s << endl;
}