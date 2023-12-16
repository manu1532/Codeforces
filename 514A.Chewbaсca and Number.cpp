#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int l = s.size();
    string ans = "";
    int start = 0;
    if(s[0] == '9'){
        start = 1;
        ans += s[0];
    }
    for(int i=start; i<l; i++){
        if(s[i] >= '5'){
            ans += 9-int(s[i]-'0')+'0';
        }
        else{
            ans += s[i];
        }
    }
    cout << ans << endl;
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
