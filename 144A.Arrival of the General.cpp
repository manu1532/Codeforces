#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int min_loc, mi;
    int max_loc, mx;
    
    max_loc = 0, mx = v[0];
    
    for(int i=0; i<n; i++){
        if(mx < v[i]){
            mx = v[i];
            max_loc = i;
        }    
    }
    
    min_loc = n-1, mi = v[n-1];
    
    for(int i=n-1; i>=0; i--){
        if(mi > v[i]){
            mi = v[i];
            min_loc = i;
        }
    }
    
    // cout << mi << " " << min_loc << endl;
    // cout << mx << " " << max_loc << endl;
    
    int res = max_loc + n-1-min_loc;
    
    if(max_loc > min_loc){
        res -= 1;
    }
    
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
