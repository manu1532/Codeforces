#include <bits/stdc++.h>
using namespace std;

void append_char(string &res, int times, char c){
    while(times--){
        res = res + c;
    }
    return ;
}

string repeat(string s, int times){
    string f_res = ""; 
    while(times--){
        f_res = f_res + s;
    }
    return f_res;
}
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
        char c = i + 'a';
        append_char(res, times, c);
    }
    
    string f_res;
    f_res = repeat(res, n);
    
    cout << f_res << endl;
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
