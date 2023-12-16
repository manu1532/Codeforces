#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v;
    int k;
    for(int i=0; i<n; i++){
        cin >> k;
        v.push_back(k);
    }
    int len, mx;
    len = mx = 1;
    for(int i=0; i<n-1; i++){
        if(v[i+1] > v[i]){
            len++;
        }
        else{
            len = 1;
        }
        mx = max(len, mx);
    }
    cout << mx << endl;
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
