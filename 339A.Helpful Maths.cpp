#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> l;
    for(int i=0; i<n; i+=2){
        l.push_back(s[i]-'0');
    }
    sort(l.begin(), l.end());
    int i;
    for(i=0; i<l.size()-1; i++){
        cout << l[i] << "+";
    }
    cout << l[i];
    return 0;
}
