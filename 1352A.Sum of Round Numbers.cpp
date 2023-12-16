#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int exp = 0;
    vector<int> ans;
    
    while(n){
        int digit = n%10;
        int mult = pow(10, exp);
        if(digit != 0){
            ans.push_back(digit*mult);    
        }
        exp++;
        n = n/10;
        
    }
    
    int l = ans.size();
    cout << l << endl;
    for(int i=0; i<l; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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
