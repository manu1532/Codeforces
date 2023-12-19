#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> v(26, 0);
    int l = s.size();
    string res = "";
    
    for(int i=0; i<l; i++){
        v[s[i]-'a']++;
    }
    
    for(int i=0; i<26; i++){
        if(v[i] % n != 0){
            cout << -1 << endl;
            return ;
        }
    }
    
    for(int i=0; i<26; i++){
        int times = v[i]/n;
        while(times--){
            char c = i + 'a';
            res = res + c;
        }
    }
    
    string temp = res;
    res = "";
    while(n--){
        res += temp;
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
