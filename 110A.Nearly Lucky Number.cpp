#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int n){
    int digit;
    if(n==0){
        return 0;
    }
    while(n){
        digit = n%10;
        if(!(digit == 4 || digit == 7)){
            return 0;
        }
        n = n/10;
    }
    return 1;
}

void solve(){
    string n;
    cin >> n;
    
    int cnt = 0;
    char digit;
    int l = n.size();
    
    for(int i=0; i<l; i++){
        digit = n[i];
        if(digit == '4' || digit == '7'){
            cnt ++;
        }
    }
    
    // cout << cnt << endl;
    
    if(is_lucky(cnt)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
