#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    
    vector<string> input(5);
    for(int i=0; i<5; i++){
        cin >> input[i];
    }
    
    for(int i=0; i<5; i++){
        if(input[i][0] == s[0] || input[i][1] == s[1]){
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
