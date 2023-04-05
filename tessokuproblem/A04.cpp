#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans(10,0);
    for(int i=9; i>=0; --i){
        if(n%2) ++ans[i];
        n /= 2;
    }
    for(int i=0; i<10; ++i) cout << ans[i];
    cout << endl;
}