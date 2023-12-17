#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l;
    string s;
    cin >> l >> s;
    
    string s0 = "";
    int step = 0;
    
    for(int i=0; i<l; i+=step){
        s0 = s0+s[i];
        step++;
    }
    
    cout << s0 << endl;
    
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
