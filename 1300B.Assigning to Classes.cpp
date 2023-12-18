#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<int> v(2*n);
    for(int i=0; i<2*n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int mid = n;
    
    cout << v[mid] - v[mid-1] << endl;
    
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
