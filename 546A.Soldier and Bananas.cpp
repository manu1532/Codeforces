#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, w;
    cin >> k >> n >> w;
    
    int tot = k*w*(w+1)/2;
    int amount = tot-n;
    
    // cout << tot << " " << amount << endl;
    
    if(amount > 0){
        cout << amount << endl;
    }
    else{
        cout << 0 << endl;
    }
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
