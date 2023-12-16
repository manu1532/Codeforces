#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second){
        return 1;
    }
    return 0;
}

void solve(){
    int n;
    cin >> n;
    
    vector<pair<int, int > > p;
    int k;
    
    for(int i=0; i<n; i++){
        cin >> k;
        p.push_back(make_pair(i+1, k));
    }
    
    sort(p.begin(), p.end(), comp);
    
    for(int i=0; i<n; i++){
        cout << p[i].first << " ";
    }
    cout << "\n";
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
