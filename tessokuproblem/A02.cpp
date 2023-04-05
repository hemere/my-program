#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    string ans = "No";
    for(int i=0; i<n; ++i){
        int xi;
        cin >> xi;
        if(xi == x) ans = "Yes";
    }
    cout << ans << endl;
}