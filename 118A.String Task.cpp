#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    
    unordered_set<char >bag;
    bag = {'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};
    int l = s.size();
    string res;
    
    for(int i=0; i<l; i++){
        auto it = bag.find(s[i]);
        if(it == bag.end()){
            res = res + "." + s[i];
        }
    }
    
    transform(res.begin(), res.end(), res.begin(), ::tolower);
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
