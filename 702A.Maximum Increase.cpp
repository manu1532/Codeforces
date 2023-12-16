#include<bits/stdc++.h>
using namespace std;
void print_arr(int a[]){
    int n = sizeof(a) / sizeof(int);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int p[n];
    for(int i=0;i<n;i++){
        p[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                p[i]++;
            }
            else{
                break;
            }

        }
    }
    sort(p,p+n);
    cout<<p[n-1];
    }
    return 0;


}
