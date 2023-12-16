#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    
    string x;
    
    for(int i=0; i<5; i++){
        cin >> x;
        if(x[0] == s[0] || x[1] == s[1]){
            cout << "YES" << endl;
            return ;
        }
    }
    cout << "NO" << endl;
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
