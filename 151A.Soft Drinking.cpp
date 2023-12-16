#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
void solve(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int drinks, slices, salt, mi;
    
    drinks = k*l / nl;
    slices = c*d;
    salt = p / np;
    
    mi = min(drinks, slices);
    mi = min(mi, salt);
    
    int res = mi/n;
    
    cout << res << endl;
    
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
