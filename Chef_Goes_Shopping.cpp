#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll int n;
        cin >> n;
        ll int l[n], r[n];
        for(auto&it : l) cin >> it;
        for(auto&it : r) cin >> it;
        ll int ans = 0;
        for(int i = 0; i < n-1; i++){
            ans += min(r[i], l[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}
