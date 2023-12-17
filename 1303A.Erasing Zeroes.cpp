#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    
    int l = s.size();
    int first_one = l-1, last_one = 0;
    int cnt = 0;
    
    for(int i=0; i<l; i++){
        if(s[i] == '1'){
            first_one = i;
            break;
        }
    }
    for(int i=l-1; i>=0; i--){
        if(s[i] == '1'){
            last_one = i;
            break;
        }
    }
    // cout << first_one << " " << last_one << endl;
    for(int i=first_one; i<last_one; i++){
        if(s[i] == '0'){
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return ;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
