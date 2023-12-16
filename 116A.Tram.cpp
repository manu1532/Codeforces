#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int in, out;
    int total = 0, mx = 0;
    
    while(n--){
        cin >> out >> in;
        total = total - out + in;
        mx = max(mx, total);
    }
    
    cout << mx << endl;
    
    return ;
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
